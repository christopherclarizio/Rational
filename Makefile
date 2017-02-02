# Makefile for the Rational class

runrational: testrational.o rational.o
	g++ testrational.o rational.o -o runrational

testrational.o: testrational.cpp rational.h
	g++ -c -std=c++11 testrational.cpp -o testrational.o

rational.o: rational.cpp rational.h
	g++ -c rational.cpp -o rational.o

clean:
	rm *.o runrational

