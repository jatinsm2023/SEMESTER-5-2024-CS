`timescale 1ns / 1ps

module not8(
    input [7:0] a,
    output [7:0] out
    );
    
    not not0(out[0],a[0]);
    not not1(out[1],a[1]);
    not not2(out[2],a[2]);
    not not3(out[3],a[3]);
    not not4(out[4],a[4]);
    not not5(out[5],a[5]);
    not not6(out[6],a[6]);
    not not7(out[7],a[7]);
endmodule
