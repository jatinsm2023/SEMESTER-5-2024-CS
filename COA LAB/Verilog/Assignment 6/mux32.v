`timescale 1ns / 1ps

module mux32(
    input [31:0] a,
    input [4:0] s,
    output out
    );
    wire [1:0] temp;
    mux16 m1(a[15:0], s[3:0], temp[0]);
    mux16 m2(a[31:16], s[3:0], temp[1]);

    mux2 m3(temp, s[4], out);
endmodule
