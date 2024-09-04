module Half_Adder(
    input a,
    input b,
    output Sum,
    output Cout
);
    assign Sum = a^b;
    assign Cout = a&b;
endmodule


module tb_half_adder;
    reg a,b;
    wire Sum,Cout;

    Half_Adder adder(
        .a(a),.b(b),.Sum(Sum),.Cout(Cout)
    );

    integer  i,j;
    initial begin
        $display("A  B  |  Sum Cout\n");
        for(i=0;i<2;i=i+1)begin
            for(j=0;j<2;j=j+1)begin
              a = i;
              b = j;
              #10 
              $display("%d  %d  |   %d  %d\n",a,b,Sum,Cout);
            end
        end
    end
endmodule