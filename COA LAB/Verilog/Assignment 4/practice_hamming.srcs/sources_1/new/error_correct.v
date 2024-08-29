`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 27.08.2024 14:44:44
// Design Name: 
// Module Name: error_correct
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


module error_correct(
    input [6:0] d_hamm,
    output reg [3:0] d_disp,
    input clk
    );
    reg [6:0] inter;
    reg [2:0] check_bits;
    
    always @(posedge clk)
        begin
            inter = d_hamm;
            check_bits[0] = d_hamm[0] ^ d_hamm[2] ^ d_hamm[4] ^ d_hamm[6];
            check_bits[1] = d_hamm[1] ^ d_hamm[2] ^ d_hamm[5] ^ d_hamm[6];
            check_bits[2] = d_hamm[3] ^ d_hamm[4] ^ d_hamm[5] ^ d_hamm[6];
            
            if (check_bits != 3'b000)
                inter[check_bits - 1] = ~inter[check_bits - 1];
            
            d_disp[0] = inter[2];
            d_disp[1] = inter[4];
            d_disp[2] = inter[5];
            d_disp[3] = inter[6];
        end
endmodule
