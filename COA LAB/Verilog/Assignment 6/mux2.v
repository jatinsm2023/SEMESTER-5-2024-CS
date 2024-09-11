`timescale 1ns / 1ps

module mux2(
    input [1:0] a,
    input s,
    output out
    );
wire temp,andA,andB;
not not1(temp,s);
and add1(andA,temp,a[0]);
and add2(andB,s,a[1]);
or or1(out,andA,andB);
endmodule
