// 1-bit Half Adder
module half_adder (
    input wire A,        // First input bit
    input wire B,        // Second input bit
    output wire Sum,     // Sum output
    output wire Carry    // Carry output
);

    // Sum and Carry calculations
    assign Sum = A ^ B;      // Sum is the XOR of A and B
    assign Carry = A & B;    // Carry is the AND of A and B

endmodule


// n-bit Half Adder
module n_bit_half_adder #(
    parameter N = 4        // Default to 4-bit, can be adjusted as needed
)(
    input wire [N-1:0] A,  // N-bit input A
    input wire [N-1:0] B,  // N-bit input B
    output wire [N-1:0] Sum,   // N-bit sum output
    output wire [N-1:0] Carry  // N-bit carry output
);

    // Instantiate n 1-bit half adders
    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : HA
            half_adder ha (
                .A(A[i]),
                .B(B[i]),
                .Sum(Sum[i]),
                .Carry(Carry[i])
            );
        end
    endgenerate

endmodule
