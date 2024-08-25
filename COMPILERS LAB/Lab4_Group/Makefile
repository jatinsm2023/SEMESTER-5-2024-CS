load: run

lex.yy.c: ass3_22cs30032_22cs10073.l
	flex ass3_22cs30032_22cs10073.l

a.out: lex.yy.c
	gcc ass3_22cs30032_22cs10073.c -o a.out

run: a.out
	./a.out < ass3_22cs30032_22cs10073_test.c

clean:
	rm -f lex.yy.c a.out
