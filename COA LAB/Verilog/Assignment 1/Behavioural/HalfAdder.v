module half_adder_nbit_behavioral #(parameter N = 3) (
    input [N-1:0] A,    // N-bit input A
    input [N-1:0] B,    // N-bit input B
    output [N-1:0] Sum, // N-bit output Sum
    output [N-1:0] Carry // N-bit output Carry
);

    // Sum is calculated as A XOR B for each bit
    assign Sum = A ^ B;
    
    // Carry is calculated as A AND B for each bit
    assign Carry = A & B;

endmodule
