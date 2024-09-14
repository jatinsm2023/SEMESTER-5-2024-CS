`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 27.08.2024 14:40:34
// Design Name: 
// Module Name: error_inject
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


module error_inject(
    input [6:0] d_orig,
    input [2:0] pos,
    output reg [6:0] d_error,
    input clk
    );
  
    always @(posedge clk)begin
        d_error = d_orig;
        d_error[pos] = ~d_orig[pos]; 
    end
endmodule
