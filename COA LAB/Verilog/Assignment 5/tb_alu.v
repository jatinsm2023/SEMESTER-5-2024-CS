`timescale 1ns / 1ps

module tb_alu;
    reg [7:0] a, b;
    reg [3:0] op;
    wire [7:0] out;
    top_alu uut(a, b, op, out);

    initial begin
        $display("a\tb\top\tout");
        $monitor("%d\t%d\t%d\t%d", a, b, op, out);
        a = 34;
        b = 3;
        op = 0;
        #50 op = 1;
        #50 op = 2;
        #50 op = 3;
        #50 op = 4;
        #50 op = 5;
        #50 op = 6;
        #50 op = 7;
        #50 op = 8;
        #50 op = 9;
        #50 op = 10;
        #50 op = 11;
        #50 op = 12;
        #50 op = 13;
        #50 op = 14;
        #50 op = 15;
        #50 $finish;
    end
endmodule
