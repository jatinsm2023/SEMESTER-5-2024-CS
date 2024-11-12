fony:
	make all
	make run

all:
	yacc -d prog.y 
	flex prog.l
	gcc codegen.c

run:
	./a.out < sample.txt 5 > output.txt


clean:
	rm -f *.out *.tab.h *.tab.c *.yy.c

