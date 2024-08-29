`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 27.08.2024 15:25:30
// Design Name: 
// Module Name: test_bench
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module test_bench;
    reg clk;
    reg [5:0] d_in;
    reg [2:0] err_pos;
    wire [15:0] out;
//    wire [6:0] t1, t2, t3, t4, e1;
//    reg [6:0] e0;
//    reg [6:0] w1;
//    wire [6:0] w2;
    top_module uut(clk, d_in, err_pos, out);
//    secure_router srt(d_in, t1, t2, t3, t4); 
//    error_inject err(e0, err_pos, e1);
//    error_correct cor(w1, w2);
    initial begin
     clk = 0;
     end  
    
    always 
      #10 clk = ~clk; 
    initial begin
        
        d_in = 6'b101010;
        err_pos = 3'b100;

        
        
        #10
        $monitor($time, "%b, %b, %b,  %b",clk, d_in, err_pos, out);
        
        #10
        
         
//        #10
//        w1 = e1;
        #150 $finish;
    end
endmodule
