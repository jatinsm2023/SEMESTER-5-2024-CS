// Test Bench for n-bit Half Adder
module tb_n_bit_half_adder;

    // Parameters
    parameter N = 4;         // Bit-width of the adder (can be changed as needed)

    // Testbench signals
    reg [N-1:0] A;          // N-bit input A
    reg [N-1:0] B;          // N-bit input B
    wire [N-1:0] Sum;       // N-bit sum output
    wire [N-1:0] Carry;     // N-bit carry output

    // Instantiate the n-bit half adder
    n_bit_half_adder #(
        .N(N)               // Set N to the desired bit-width
    ) uut (
        .A(A),
        .B(B),
        .Sum(Sum),
        .Carry(Carry)
    );

    // Test sequence
    integer i, j;
    initial begin
        // Display results
        $monitor("Time = %0t | A = %b | B = %b | Sum = %b | Carry = %b", $time, A, B, Sum, Carry);

        // Apply test vectors
        for (i = 0; i < (1 << N); i = i + 1) begin
            for (j = 0; j < (1 << N); j = j + 1) begin
                A = i;
                B = j;
                #10; // Wait for 10 time units
            end
        end

        // Finish simulation
        $finish;
    end

endmodule
