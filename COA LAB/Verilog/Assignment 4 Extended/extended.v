module secure_router (
    input clk,
    input rst_n,
    input bit_in,           // 1-bit data input
    input strobe_in,        // Strobe signal input
    output reg [6:0] hamming_data, // Hamming encoded 7-bit data
    output reg hamming_ready       // Indicates Hamming code is ready
);

    reg [5:0] data_register; // Store the 6-bit input data
    reg [2:0] bit_count;     // Counter to track received bits

    // Capture the 6-bit input and encode to Hamming code
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            bit_count <= 0;
            hamming_data <= 0;
            hamming_ready <= 0;
            data_register <= 0;
        end else if (strobe_in) begin
            data_register[bit_count] = bit_in;
            bit_count = bit_count + 1;

            if (bit_count == 6) begin
                // Encode the 4 bits into a 7-bit Hamming code
                hamming_data[2] = data_register[0];
                hamming_data[4] = data_register[1];
                hamming_data[5] = data_register[2];
                hamming_data[6] = data_register[3];

                hamming_data[0] =  hamming_data[2] ^ hamming_data[4] ^ hamming_data[6];
                hamming_data[1] =  hamming_data[2] ^ hamming_data[5] ^ hamming_data[6];
                hamming_data[3] =  hamming_data[4] ^ hamming_data[5] ^ hamming_data[6];

                hamming_ready = 1;
            end
        end
    end
endmodule


module error_inject (
    input clk,
    input rst_n,
    input bit_in,           // 1-bit data input (Hamming encoded)
    input strobe_in,        // Strobe signal input
    output reg [6:0] error_data, // 7-bit data with an error injected
    output reg error_ready       // Indicates error data is ready
);

    reg [6:0] data_register; // Store the 7-bit Hamming code
    reg [2:0] bit_count;     // Counter to track received bits

    // Capture the 7-bit Hamming code and inject an error
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            bit_count <= 0;
            error_data <= 0;
            error_ready <= 0;
        end else if (strobe_in) begin
            data_register[bit_count] = bit_in;
            bit_count = bit_count + 1;

            if (bit_count == 7) begin
                // Inject error at bit position 3 (example)
                error_data = data_register;
                error_data[3] = ~error_data[3];
                error_ready = 1;
            end
        end
    end
endmodule


module error_correct (
    input clk,
    input rst_n,
    input bit_in,           // 1-bit data input (with error)
    input strobe_in,        // Strobe signal input
    output reg [3:0] corrected_data, // Corrected 4-bit data
    output reg data_ready        // Indicates the corrected data is ready
);

    reg [6:0] data_register; // Store the 7-bit Hamming code with error
    reg [2:0] bit_count;     // Counter to track received bits
    reg [2:0] syndrome;      // Syndrome to detect and correct errors

    // Correct the error and extract the original 4-bit data
    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            bit_count <= 0;
            corrected_data <= 0;
            data_ready <= 0;
            data_register <= 0;
        end else if (strobe_in) begin
            data_register[bit_count] = bit_in;
            bit_count = bit_count + 1;

            if (bit_count == 7) begin
                // Calculate syndrome
                syndrome[0] = data_register[0] ^ data_register[2] ^ data_register[4] ^ data_register[6];
                syndrome[1] = data_register[1] ^ data_register[2] ^ data_register[5] ^ data_register[6];
                syndrome[2] = data_register[3] ^ data_register[4] ^ data_register[5] ^ data_register[6];

                // Correct the error based on the syndrome
                if (syndrome != 3'b000) begin
                    data_register[syndrome - 1] = ~data_register[syndrome - 1];
                end

                // Extract the original 4-bit data
                corrected_data[3] = data_register[6];
                corrected_data[2] = data_register[5];
                corrected_data[1] = data_register[4];
                corrected_data[0] = data_register[2];

                data_ready = 1;
            end
        end
    end
endmodule



module test_bench;

    // Clock and reset
    reg clk;
    reg rst_n;

    // Signals for secure_router
    reg bit_in;
    reg strobe_in;
    wire [6:0] hamming_data;
    wire hamming_ready;

    // Signals for error_inject
    reg bit_in_injector;
    reg strobe_in_injector;
    wire [6:0] error_data;
    wire error_ready;

    // Signals for error_correct
    reg bit_in_corrector;
    reg strobe_in_corrector;
    wire [3:0] corrected_data;
    wire data_ready;

    // Temporary registers to hold serial data for printing
    reg [6:0] hamming_data_reg;
    reg [6:0] error_data_reg;
    reg [3:0] corrected_data_reg;

    // Declare loop variable at the top-level scope
    integer i;

    // Instantiate modules
    secure_router router (
        .clk(clk),
        .rst_n(rst_n),
        .bit_in(bit_in),
        .strobe_in(strobe_in),
        .hamming_data(hamming_data),
        .hamming_ready(hamming_ready)
    );

    error_inject injector (
        .clk(clk),
        .rst_n(rst_n),
        .bit_in(bit_in_injector),
        .strobe_in(strobe_in_injector),
        .error_data(error_data),
        .error_ready(error_ready)
    );

    error_correct corrector (
        .clk(clk),
        .rst_n(rst_n),
        .bit_in(bit_in_corrector),
        .strobe_in(strobe_in_corrector),
        .corrected_data(corrected_data),
        .data_ready(data_ready)
    );

    // Clock generation
    always begin
        #5 clk = ~clk;  // 10 ns clock period
    end

    // Test sequence
    initial begin
        // Initialize
        clk = 0;
        rst_n = 0;
        bit_in = 0;
        strobe_in = 0;
        bit_in_injector = 0;
        strobe_in_injector = 0;
        bit_in_corrector = 0;
        strobe_in_corrector = 0;

        // Apply reset
        #10 rst_n = 1;

        // Feed bits into secure_router
        $display("Feeding data into secure_router:");

        #10 bit_in = 0; strobe_in = 1; #10 strobe_in = 0; $display("Sent bit: %b", bit_in);
        #10 bit_in = 1; strobe_in = 1; #10 strobe_in = 0; $display("Sent bit: %b", bit_in);
        #10 bit_in = 1; strobe_in = 1; #10 strobe_in = 0; $display("Sent bit: %b", bit_in);
        #10 bit_in = 1; strobe_in = 1; #10 strobe_in = 0; $display("Sent bit: %b", bit_in);
        #10 bit_in = 1; strobe_in = 1; #10 strobe_in = 0; $display("Sent bit: %b", bit_in);
        #10 bit_in = 1; strobe_in = 1; #10 strobe_in = 0; $display("Sent bit: %b", bit_in);

        // After all bits are fed, Hamming code is ready
        if (hamming_ready) begin
            hamming_data_reg = hamming_data;
            $display("Hamming Code generated: %b", hamming_data_reg);
        end

        // Simulate the serial transfer to error_inject
        for (i = 0; i < 7; i = i + 1) begin
            #10 bit_in_injector = hamming_data_reg[i]; strobe_in_injector = 1;
            #10 strobe_in_injector = 0;
            $display("Sending Hamming bit to error_inject: %b", hamming_data_reg[i]);
        end

        // After error injection, data is ready
        if (error_ready) begin
            error_data_reg = error_data;
            $display("Error Injected Data: %b", error_data_reg);
        end

        // Simulate the serial transfer to error_correct
        for (i = 0; i < 7; i = i + 1) begin
            #10 bit_in_corrector = error_data_reg[i]; strobe_in_corrector = 1;
            #10 strobe_in_corrector = 0;
            $display("Sending bit to error_correct: %b", error_data_reg[i]);
        end

        // Finally, print the corrected data
        if (data_ready) begin
            corrected_data_reg = corrected_data;
            $display("Corrected Data: %b", corrected_data_reg);
        end

        // Finish simulation
        #100 $finish;
    end

endmodule
