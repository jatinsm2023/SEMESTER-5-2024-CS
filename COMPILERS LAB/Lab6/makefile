all:
	yacc -d expr.y
	flex expr.l
	gcc intcodegen.c -o icgen

run:
	./icgen < sample.txt > intcode.c
	gcc intcode.c -o ic
	./ic > output.txt

clean:
	rm lex.yy.c y.tab.c y.tab.h ic icgen output.txt intcode.c