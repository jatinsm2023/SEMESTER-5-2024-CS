// Test Bench for n-bit Full Adder
module tb_n_bit_full_adder;

    // Parameters
    parameter N = 3;         // Bit-width of the adder (can be changed as needed)

    // Testbench signals
    reg [N-1:0] A;          // N-bit input A
    reg [N-1:0] B;          // N-bit input B
    reg Cin;                // Carry-in
    wire [N-1:0] Sum;       // N-bit sum output
    wire Cout;              // Carry-out from the last bit

    // Instantiate the n-bit full adder
    n_bit_full_adder #(
        .N(N)               // Set N to the desired bit-width
    ) uut (
        .A(A),
        .B(B),
        .Cin(Cin),
        .Sum(Sum),
        .Cout(Cout)
    );

    // Test sequence
    integer i, j;
    initial begin
        // Display results
        $monitor("Time = %0t | A = %b | B = %b | Cin = %b | Sum = %b | Cout = %b", $time, A, B, Cin, Sum, Cout);

        // Apply test vectors
        for (i = 0; i < (1 << N); i = i + 1) begin
            for (j = 0; j < (1 << N); j = j + 1) begin
                A = i;
                B = j;
                Cin = 0; // Testing with carry-in 0
                #10;
                Cin = 1; // Testing with carry-in 1
                #10;
            end
        end

        // Finish simulation
        $finish;
    end

endmodule
