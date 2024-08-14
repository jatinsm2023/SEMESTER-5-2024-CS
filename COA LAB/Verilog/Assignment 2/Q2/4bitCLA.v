module CLA4bit (
    input [3:0] A,
    input [3:0] B,
    input Cin,
    output [3:0] Sum,
    output Cout 
);

    wire [3:0] G; 
    wire [3:0] P; 
    wire [3:0] C; 

    assign G = A & B;
    assign P = A | B;

    assign C[0] = Cin;
    assign C[1] = G[0] | (P[0] & C[0]);
    assign C[2] = G[1] | (P[1] & C[1]);
    assign C[3] = G[2] | (P[2] & C[2]);
    assign Cout = G[3] | (P[3] & C[3]);

    assign Sum[0] = A[0] ^ B[0] ^ C[0];
	 assign Sum[1] = A[1] ^ B[1] ^ C[1];
	 assign Sum[2] = A[2] ^ B[2] ^ C[2];
	 assign Sum[3] = A[3] ^ B[3] ^ C[3];

endmodule
