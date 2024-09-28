all:
	yacc -d expr.y  -Wcounterexamples
	flex expr.l
	gcc expr.c
	./a.out < input.c > output
	rm lex.yy.c y.tab.c y.tab.h a.out