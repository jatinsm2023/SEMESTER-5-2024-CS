module half_adder_nbit_behavioral #(parameter N = 3) (
    input [N-1:0] A,
    input [N-1:0] B,
    output [N-1:0] Sum,
    output [N-1:0] Carry
);

    assign Sum = A ^ B;
    assign Carry = A & B;

endmodule