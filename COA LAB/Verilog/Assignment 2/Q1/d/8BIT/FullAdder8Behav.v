module full_adder_nbit_behavioral #(parameter N = 8) (
    input [N-1:0] A, B,
    input Cin,
    output [N-1:0] Sum,
    output Cout
);

    reg [N:0] temp;

    always @(*) begin
        temp = A + B + Cin;
    end

    assign Sum = temp[N-1:0];
    assign Cout = temp[N];

endmodule
