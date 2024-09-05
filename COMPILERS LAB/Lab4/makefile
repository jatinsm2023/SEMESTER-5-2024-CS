all:
	flex expr.l
	yacc -d expr.y 
	gcc -o parser lex.yy.c y.tab.c expr.c -lm 
	./parser < test 
	rm -f lex.yy.c y.tab.c y.tab.h parser
