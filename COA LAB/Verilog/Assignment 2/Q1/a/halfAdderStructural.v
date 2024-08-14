module half_adder (
    input A,
    input B,
    output Sum,
    output Carry
);

    xor gate1(Sum, A, B);
    and gate2(Carry, A, B);

endmodule