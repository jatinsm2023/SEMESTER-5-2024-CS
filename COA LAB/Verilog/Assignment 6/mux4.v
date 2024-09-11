`timescale 1ns / 1ps

module mux4(
    input [3:0] a,
    input [1:0] s,
    output out
    );
    wire [1:0]temp;
    mux2 m1(a[1:0],s[0],temp[0]);
    mux2 m2(a[3:2],s[0],temp[1]);
    mux2 m3(temp,s[1],out);
endmodule
