module half_adder (
    input A,
    input B,
    output Sum,
    output Carry
);

    xor gate1(Sum, A, B);
    and gate2(Carry, A, B);

endmodule

module half_adder_nbit #(parameter N = 3) (
    input [N-1:0] A,
    input [N-1:0] B,
    output [N-1:0] Sum,
    output [N-1:0] Carry
);

    genvar i;
    generate
        for (i = 0; i < N; i = i + 1) begin : gen_half_adder
            half_adder ha(A[i], B[i], Sum[i], Carry[i]);
        end
    endgenerate

endmodule
