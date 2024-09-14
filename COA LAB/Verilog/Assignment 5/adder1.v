`timescale 1ns / 1ps

module adder1(
    input a,
    input b,
    input c_in,
    output [1:0] sum
);
    wire w1, w2, w3, w4;
    
    and g1(w1, a, b);
    and g2(w2, b, c_in);
    and g3(w3, c_in, a);
    or g4(w4, w2, w1);
    or g5(sum[1], w4, w3);
    xor g6(sum[0], a, b, c_in);
    
endmodule
