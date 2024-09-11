module register_bank(
    input clk,                                  
    input [2:0] read_reg1,       
    input [2:0] read_reg2,       
    input [2:0] write_reg,       
    input [31:0] write_data,                
    output reg [31:0] read_data1, 
    output reg [31:0] read_data2  
);

    reg [31:0] registers [7:0]; 
    

    
    always @(posedge clk) begin
            registers[write_reg] <= write_data;
    end

    always @(negedge clk) begin
        read_data1 <= registers[read_reg1];
        read_data2 <= registers[read_reg2];
    end

endmodule
