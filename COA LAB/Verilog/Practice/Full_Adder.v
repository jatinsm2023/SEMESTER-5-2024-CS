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


module tb_Full_Adder;
    reg a,b,Cin;
    wire Sum,Cout;

    Full_Adder adder(
        .a(a),.b(b),.Sum(Sum),.Cout(Cout),.Cin(Cin)
    );

    integer  i,j,k;
    initial begin
        $display("A  B Cin |  Sum Cout\n");
        for(i=0;i<2;i=i+1)begin
            for(j=0;j<2;j=j+1)begin
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