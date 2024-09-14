`timescale 1ns / 1ps

module adder3(
        input [2:0]a,
        input [2:0]b,
        input c_in,
        output [3:0] sum
    );
    wire [3:0] w;
    
    add1 b1(a[0], b[0], c_in, sum[0], w[0]);
    add1 b2(a[1], b[1],w[0], sum[1], w[1]);
    add1 b3(a[2], b[2], w[1], sum[2], sum[3]);
endmodule
