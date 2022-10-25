taxid.o	: taxid.cc	taxid.h
	g++ -std=c++17 -Wall -I . -c taxid.cc
testtaxid.o : testtaxid.cc taxid.h
	g++ -std=c++17 -Wall -I . -c testtaxid.cc
testtaxid : taxid.o	testtaxid.o	taxid.h
	g++ -std=c++17 -Wall -I . taxid.o testtaxid.o -o testtaxid

employee.o : employee.cc employee.h
	g++	-std=c++17 -Wall -I . -c employee.cc

testemployee.o : employee.cc employee.h
	g++ -std=c++17 -Wall -I . -c testemployee.cc

testemployee : employee.o testemployee.o
	g++ -std=c++17 -Wall -I . employee.o testemployee.o taxid.o -o testemployee

clean :
	rm *.o testemployee testtaxid