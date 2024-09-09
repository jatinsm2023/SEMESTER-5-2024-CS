`timescale 1ns / 1ps

module sub1(
    input a,
    input b,  
    input bin,
    output diff,
    output bout 
    );
    wire w1,w2,w3,w4,w5;
    not N1(w5,a);
    and A1(w1,w5,b);
    and A2(w2,w5,bin);
    and A3(w3,b,bin);
    or X1(bout,w1,w2,w3);
    xor X2(diff,a,b,bin);
    
endmodule
    
module sub8(
    input [7:0] a,
    input [7:0] b,
    output reg [7:0] out
    );
    wire [8:0] carry;
    assign carry[0] = 0;
    sub1 A1(a[0],b[0],carry[0],out[0],carry[1]);
    sub1 A2(a[1],b[1],carry[1],out[1],carry[2]);
    sub1 A3(a[2],b[2],carry[2],out[2],carry[3]);
    sub1 A4(a[3],b[3],carry[3],out[3],carry[4]);
    sub1 A5(a[4],b[4],carry[4],out[4],carry[5]);
    sub1 A6(a[5],b[5],carry[5],out[5],carry[6]);
    sub1 A7(a[6],b[6],carry[6],out[6],carry[7]);
    sub1 A8(a[7],b[7],carry[7],out[7],carry[8]);
    
endmodule
