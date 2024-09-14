`timescale 1ns / 1ps

module tb_reg;

reg [2:0] op;
reg clk;

top_reg tr(clk, op);

initial begin
    tr.rgb.registers[0] = 0;
    tr.rgb.registers[1] = 7;
    tr.rgb.registers[2] = 6;
    tr.rgb.registers[3] = 5;
    tr.rgb.registers[4] = 4;
    tr.rgb.registers[5] = 3;
    tr.rgb.registers[6] = 2;
    tr.rgb.registers[7] = 1;
end
    
initial begin
    $monitor($time, ",%b,%d,%d,%d,%d,%d,%d,%d,%d,%b", clk, tr.rgb.registers[0], tr.rgb.registers[1], tr.rgb.registers[2], tr.rgb.registers[3], tr.rgb.registers[4], tr.rgb.registers[5], tr.rgb.registers[6], tr.rgb.registers[7], op);
    #10
    op = 3'b000;
    #10 clk = 0;
    #10 clk = 1;
    
    #10
    op = 3'b001;
    #10 clk = 0;
    #10 clk = 1;
    
    #10
    op = 3'b010;
   #10 clk = 0;
    #10 clk = 1;
    
    #10
    op = 3'b011;
   #10 clk = 0;
    #10 clk = 1;
    
    #10
    op = 3'b100;
    #10 clk = 0;
    #10 clk = 1;
    
    #10
    op = 3'b101;
       #10 clk = 0;
    #10 clk = 1;
    
    #10
    op = 3'b110;
    #10 clk = 0;
    #10 clk = 1;
    
    #10
    op = 3'b111;
       #10 clk = 0;
    #10 clk = 1;
    
   
    #120
    $finish;
end
endmodule
