all:
	yacc -d TinyC3_22CS30032_22CS10073.y
	flex TinyC3_22CS30032_22CS10073.l
	g++ TinyC3_22CS30032_22CS10073_translator.cxx
	./a.out < test-inputs/TinyC3_22CS30032_22CS10073_test1.c > test-outputs/TinyC3_22CS30032_22CS10073_quads1.out
	./a.out < test-inputs/TinyC3_22CS30032_22CS10073_test2.c > test-outputs/TinyC3_22CS30032_22CS10073_quads2.out
	./a.out < test-inputs/TinyC3_22CS30032_22CS10073_test3.c > test-outputs/TinyC3_22CS30032_22CS10073_quads3.out
	./a.out < test-inputs/TinyC3_22CS30032_22CS10073_test4.c > test-outputs/TinyC3_22CS30032_22CS10073_quads4.out
	./a.out < test-inputs/TinyC3_22CS30032_22CS10073_test5.c > test-outputs/TinyC3_22CS30032_22CS10073_quads5.out
	./a.out < test-inputs/TinyC3_22CS30032_22CS10073_test6.c > test-outputs/TinyC3_22CS30032_22CS10073_quads6.out

clean:
	rm -f lex.yy.c *.tab.c *.tab.h *.output *.o a.out *.gch test-outputs/*.out