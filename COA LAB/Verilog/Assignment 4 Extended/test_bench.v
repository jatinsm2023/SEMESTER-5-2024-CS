
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


module error_inject(
    input [6:0] d_orig,
    input [2:0] pos,
    output reg [6:0] d_error,
    input clk
    );
  
    always @(posedge clk)begin
        d_error = d_orig;
        d_error[pos-1] = ~d_orig[pos-1]; 
    end
endmodule




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


module top_module(
    input  clk,
    input [5:0] d_in,
    input [2:0] err_pos,
    output  [15:0] out
    );
    
    wire [6:0] t0, t1, t2, t3, u0, u1, u2, u3;
    wire [3:0] out0, out1, out2, out3;

    
    secure_router rtr(d_in, t0, t1, t2, t3, clk);

    error_inject e0(t0, err_pos, u0, clk);
    error_inject e1(t1, err_pos, u1, clk);
    error_inject e2(t2, err_pos, u2, clk);
    error_inject e3(t3, err_pos, u3, clk);
    
    error_correct cur0(u0, out[3:0], clk);
    error_correct cur1(u1, out[7:4], clk);
    error_correct cur2(u2, out[11:8], clk);
    error_correct cur3(u3, out[15:12], clk);

endmodule



module test_bench;
    reg clk;
    reg [5:0] d_in;
    reg [2:0] err_pos;
    wire [15:0] out;

    top_module uut(clk, d_in, err_pos, out);

    initial begin
     clk = 0;
     end  
    
    always 
      #10 clk = ~clk; 
    initial begin
        
        d_in = 6'b001011;
        err_pos = 3'b001;

        
        
        #10
        $monitor($time, "%b, %b, %b,  %b",clk, d_in, err_pos, out);
        
        #10
        
         
//        #10
//        w1 = e1;
        #150 $finish;
    end
endmodule
