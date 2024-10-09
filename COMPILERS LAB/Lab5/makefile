all:
	make run
	make clean

run:
	yacc -d poly.y 
	flex poly.l
	gcc polyutils.c 
	./a.out < sample.txt > output

clean:
	rm -f lex.yy.c y.tab.c y.tab.h a.out 