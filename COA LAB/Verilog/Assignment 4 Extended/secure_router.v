
module secure_router(
    input [5:0] d_in,
    output reg [6:0] d_out0,
    output reg [6:0] d_out1,
    output reg [6:0] d_out2,
    output reg [6:0] d_out3,
    input clk
    );
    
    reg [6:0] hamming;
    reg [1:0] port;
   
   always @(posedge clk) begin
         port[0] = d_in[4];
         port[1] = d_in[5];
        
         hamming[2] = d_in[0];
         hamming[4] = d_in[1];
         hamming[5] = d_in[2];
         hamming[6] = d_in[3];
        
         hamming[0] = hamming[2]^hamming[4]^hamming[6];
         hamming[1] = hamming[2]^hamming[5]^hamming[6];
         hamming[3] = hamming[4]^hamming[5]^hamming[6];
           d_out0 = 7'b0000000;
            d_out1 = 7'b0000000;
            d_out2 = 7'b0000000;
            d_out3 = 7'b0000000;
        
         case (port)
            2'b00:d_out0 = hamming;
            2'b01:d_out1 = hamming;
            2'b10:  d_out2 = hamming;
            2'b11:  d_out3 = hamming;
            default: ; 
         endcase
         
   end
      
endmodule
