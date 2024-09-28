all:
	yacc -d expr.y  -Wcounterexamples
	flex expr.l
	gcc expr.c
	./a.out < input.c > output