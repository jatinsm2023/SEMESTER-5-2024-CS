module Full_Adder(
    input a,
    input b,
    input Cin,
    output Sum,
    output Cout
);
    assign Sum = a^b^Cin;
    assign Cout = (a&b)|(b&Cin)|(Cin&a);
endmodule


module nbitfull_Adder #(parameter N=8) (
    input [N-1:0] a,
    input [N-1:0] b,
    input Cin,
    output [N-1:0] Sum,
    output Cout
);
    wire [N:0] C;
    assign C[0] = Cin;
    genvar  i;
    generate
        for(i=0;i<N;i=i+1)begin : Full_adder_loop
            Full_Adder FA(.a(a[i]),.b(b[i]),.Cin(C[i]),.Sum(Sum[i]),.Cout(C[i+1]));
        end
    endgenerate 
    assign Cout = C[N];
endmodule



module tb_Full_Adder;
    parameter  N = 8 ;
    reg [N-1:0] a,b;
    reg Cin;
    wire [N-1:0] Sum;
    wire Cout;

    nbitfull_Adder adder(
        .a(a),.b(b),.Sum(Sum),.Cout(Cout),.Cin(Cin)
    );

    integer  i,j,k;
    initial begin
        $display("A  B Cin |  Sum Cout\n");
        for(i=0;i<2**N;i=i+1)begin
            for(j=0;j<2**N;j=j+1)begin
                for(k=0;k<2;k=k+1)begin
                a = i;
                b = j;
                Cin = k;
                #10 
                $display("%d  %d  %d  |   %d  %d\n",a,b,Cin,Sum,Cout);
                end
            end
        end
    end
endmodule