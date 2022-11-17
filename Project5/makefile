fraction.o : fraction.cc fraction.h
	g++ -c -Wall -I . fraction.cc

TestFractionConstructor : fraction.o fraction.h TestFractionConstructor.cc
	g++ -Wall -I . TestFractionConstructor.cc fraction.o
	./a.out

TestFractionMultiply : fraction.o fraction.h TestFractionMultiply.cc
	g++ -Wall -I . TestFractionMultiply.cc fraction.o
	./a.out

TestFractionMultiplyOperator : fraction.o fraction.h TestFractionMultiplyOperator.cc
	g++ -Wall -I . TestFractionMultiplyOperator.cc fraction.o
	./a.out

TestFractionDivide : fraction.o fraction.h TestFractionDivide.cc
	g++ -Wall -I . TestFractionDivide.cc fraction.o
	./a.out

TestFractionToDecimal : fraction.o fraction.h TestFractionToDecimal.cc
	g++ -Wall -I . TestFractionToDecimal.cc fraction.o
	./a.out

TestFractionToString : fraction.o fraction.h TestFractionToString.cc
	g++ -Wall -I . TestFractionToString.cc fraction.o
	./a.out

probability.o : probability.cc probability.h
	g++ -c -Wall -I . probability.cc

TestProbabilityConstructor : probability.o probability.h fraction.o fraction.h TestProbabilityConstructor.cc
	g++ -Wall -I . TestProbabilityConstructor.cc probability.o fraction.o
	./a.out

TestProbabilityMultiply : probability.o probability.h fraction.o fraction.h TestProbabilityMultiply.cc
	g++ -Wall -I . TestProbabilityMultiply.cc probability.o fraction.o
	./a.out

TestProbabilityMultiplyOperator : probability.o probability.h fraction.o fraction.h TestProbabilityMultiplyOperator.cc
	g++ -Wall -I . TestProbabilityMultiplyOperator.cc probability.o fraction.o
	./a.out

TestProbabilityDivide : probability.o probability.h fraction.o fraction.h TestProbabilityDivide.cc
	g++ -Wall -I . TestProbabilityDivide.cc probability.o fraction.o
	./a.out

TestProbabilityToDecimal : probability.o probability.h fraction.o fraction.h TestProbabilityToDecimal.cc
	g++ -Wall -I . TestProbabilityToDecimal.cc probability.o fraction.o
	./a.out

TestProbabilityToString : probability.o probability.h fraction.o fraction.h TestProbabilityToString.cc
	g++ -Wall -I . TestProbabilityToString.cc probability.o fraction.o
	./a.out

clean :
	rm *.o a.out
