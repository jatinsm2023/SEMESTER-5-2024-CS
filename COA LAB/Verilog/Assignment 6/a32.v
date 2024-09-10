`timescale 1ns / 1ps

module a8(
    input [7:0] a,
    output [7:0] out
    );
    assign out[0] = a[0];
    assign out[1] = a[1];
    assign out[2] = a[2];
    assign out[3] = a[3];
    assign out[4] = a[4];
    assign out[5] = a[5];
    assign out[6] = a[6];
    assign out[7] = a[7];
endmodule


module a32(
    input [31:0] a,
    output [31:0] out
    );
    a8 a1(a[7:0], out[7:0]);
    a8 a2(a[15:8], out[15:8]);
    a8 a3(a[23:16], out[23:16]);
    a8 a4(a[31:24], out[31:24]);

endmodule