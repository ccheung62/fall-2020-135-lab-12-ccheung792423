main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o
	g++ -o tests tests.o

main.o: main.cpp funcs.h

funcs.o: funcs.cpp funcs.h

tests.o: tests.cpp doctest.h

clean:
	rm -f main.o tests.o funcs.o
