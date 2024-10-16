all:
	yacc -d expr.y
	flex expr.l
	gcc intcodegen.c 
	./a.out < test > output.c
	gcc output.c -o output
	./output > finaloutput

clean:
	rm lex.yy.c y.tab.c y.tab.h *.out
