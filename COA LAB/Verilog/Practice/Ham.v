module add(
    input a,
    input b,
    input cin,
    output sum,
    output cout
);

    assign sum = a ^ b ^ cin;
    assign cout = (a & b) | (cin & (a ^ b));

endmodule

module add32(
    input [31:0] a,
    input [31:0] b,
    output [31:0] sum,
    output carry
);
    
    wire [32:0] carrys;
    assign carrys[0] = 1'b0;
    add add1(a[0], b[0], carrys[0], sum[0], carrys[1]);
    add add2(a[1], b[1], carrys[1], sum[1], carrys[2]);
    add add3(a[2], b[2], carrys[2], sum[2], carrys[3]);
    add add4(a[3], b[3], carrys[3], sum[3], carrys[4]);
    add add5(a[4], b[4], carrys[4], sum[4], carrys[5]);
    add add6(a[5], b[5], carrys[5], sum[5], carrys[6]);
    add add7(a[6], b[6], carrys[6], sum[6], carrys[7]);
    add add8(a[7], b[7], carrys[7], sum[7], carrys[8]);
    add add9(a[8], b[8], carrys[8], sum[8], carrys[9]);
    add add10(a[9], b[9], carrys[9], sum[9], carrys[10]);
    add add11(a[10], b[10], carrys[10], sum[10], carrys[11]);
    add add12(a[11], b[11], carrys[11], sum[11], carrys[12]);
    add add13(a[12], b[12], carrys[12], sum[12], carrys[13]);
    add add14(a[13], b[13], carrys[13], sum[13], carrys[14]);
    add add15(a[14], b[14], carrys[14], sum[14], carrys[15]);
    add add16(a[15], b[15], carrys[15], sum[15], carrys[16]);
    add add17(a[16], b[16], carrys[16], sum[16], carrys[17]);
    add add18(a[17], b[17], carrys[17], sum[17], carrys[18]);
    add add19(a[18], b[18], carrys[18], sum[18], carrys[19]);
    add add20(a[19], b[19], carrys[19], sum[19], carrys[20]);
    add add21(a[20], b[20], carrys[20], sum[20], carrys[21]);
    add add22(a[21], b[21], carrys[21], sum[21], carrys[22]);
    add add23(a[22], b[22], carrys[22], sum[22], carrys[23]);
    add add24(a[23], b[23], carrys[23], sum[23], carrys[24]);
    add add25(a[24], b[24], carrys[24], sum[24], carrys[25]);
    add add26(a[25], b[25], carrys[25], sum[25], carrys[26]);
    add add27(a[26], b[26], carrys[26], sum[26], carrys[27]);
    add add28(a[27], b[27], carrys[27], sum[27], carrys[28]);
    add add29(a[28], b[28], carrys[28], sum[28], carrys[29]);
    add add30(a[29], b[29], carrys[29], sum[29], carrys[30]);
    add add31(a[30], b[30], carrys[30], sum[30], carrys[31]);
    add add32(a[31], b[31], carrys[31], sum[31], carrys[32]);
    assign carry = carrys[32];

endmodule


module ham32(
    input [31:0] a,
    output [31:0] out
);
    reg [31:0] sum;
    integer  i;
    always @(*) begin
        sum = 32'b0;    
          for(i=0;i<32;i=i+1)begin
            if(a[i]==1'b1)begin
                 sum = sum + 1;
            end
        end
    end
      

    assign out = sum;
endmodule




module test_bench;
    reg [31:0] a;
    wire [31:0] out;
    wire carry;
    ham32 ham(a,out);
    initial begin
        a = 32'b10101010101010101010101010101010;
        #10;
        $display("a = %b",a);
        $display("out = %b",out);
    end



endmodule