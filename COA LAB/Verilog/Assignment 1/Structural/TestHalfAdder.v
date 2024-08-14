module tb_half_adder_nbit;

    parameter N = 3;  // Parameter to define the bit-width of the half adder
    reg [N-1:0] A, B; // N-bit inputs to the half adder
    wire [N-1:0] Sum, Carry; // N-bit outputs from the half adder

    // Instantiate the n-bit half adder
    half_adder_nbit #(N) uut (
        .A(A),
        .B(B),
        .Sum(Sum),
        .Carry(Carry)
    );

    integer i, j; // Loop variables for generating test cases

    initial begin
        // Display header
        $display("A       B       | Sum     Carry");

        // Generate all possible combinations of inputs A and B
        for (i = 0; i < 2**N; i = i + 1) begin
            for (j = 0; j < 2**N; j = j + 1) begin
                A = i;
                B = j;
                #10; // Wait for a short time to observe the outputs
                $display("%b %b |  %b    %b", A, B, Sum, Carry);
            end
        end

        // Finish simulation
        $stop;
    end

endmodule
