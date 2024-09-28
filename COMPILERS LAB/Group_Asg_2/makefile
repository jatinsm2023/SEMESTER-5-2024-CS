all:
	yacc -d expr.y 
	flex expr.l
	gcc expr.c
	./a.out < input.c > output