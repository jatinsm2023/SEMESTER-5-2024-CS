module half_adder_nbit #(parameter N = 3) (
    input [N-1:0] A,    // N-bit input A
    input [N-1:0] B,    // N-bit input B
    output [N-1:0] Sum, // N-bit output Sum
    output [N-1:0] Carry // N-bit output Carry
);

    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : gen_half_adder
            assign Sum[i] = A[i] ^ B[i];
            assign Carry[i] = A[i] & B[i];
        end
    endgenerate

endmodule
