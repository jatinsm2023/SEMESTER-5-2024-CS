all:
	yacc -d tinyC2_22CS30032_22CS10073.y 
	flex tinyC2_22CS10073_22CS30032.l
	gcc tinyC2_22CS30032_22CS10073.c
	./a.out < input_22CS30032_22CS10073.c > output_22CS30032_22CS10073.txt

clean:
	rm lex.yy.c y.tab.c y.tab.h a.out