run:  lexyyc aout
	./a.out < ass3_22cs30032_22cs10073_test.c > output
	rm -f lex.yy.c a.out 

lexyyc: ass3_22cs10073_22cs30032.l
	flex ass3_22cs10073_22cs30032.l

aout: ass3_22cs30032_22cs10073.c
	gcc ass3_22cs30032_22cs10073.c -o a.out


clean:
	rm -f lex.yy.c a.out 
