all:
	yacc -d ass5_19CS10064_19CS30008.y
	flex ass5_19CS10064_19CS30008.l
	g++ ass5_19CS10064_19CS30008_translator.cxx
	./a.out < test-inputs/ass5_19CS10064_19CS30008_test1.c > test-outputs/ass5_19CS10064_19CS30008_quads1.out
	./a.out < test-inputs/ass5_19CS10064_19CS30008_test2.c > test-outputs/ass5_19CS10064_19CS30008_quads2.out
	./a.out < test-inputs/ass5_19CS10064_19CS30008_test3.c > test-outputs/ass5_19CS10064_19CS30008_quads3.out
	./a.out < test-inputs/ass5_19CS10064_19CS30008_test4.c > test-outputs/ass5_19CS10064_19CS30008_quads4.out
	./a.out < test-inputs/ass5_19CS10064_19CS30008_test5.c > test-outputs/ass5_19CS10064_19CS30008_quads5.out
	./a.out < test-inputs/ass5_19CS10064_19CS30008_test6.c > test-outputs/ass5_19CS10064_19CS30008_quads6.out

clean:
	rm -f lex.yy.c *.tab.c *.tab.h *.output *.o a.out *.gch test-outputs/*_quads*.out