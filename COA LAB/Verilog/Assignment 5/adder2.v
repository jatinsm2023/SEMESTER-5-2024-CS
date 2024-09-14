`timescale 1ns / 1ps

module adder2(
        input [1:0]a,
        input [1:0]b,
        input c_in,
        output [2:0] sum
    );
    wire [2:0]w;
    
    add1 a1(a[0], b[0], c_in, sum[0], w[0]);
    add1 a2(a[1], b[1], w[0], sum[1], sum[2]);
    
endmodule
