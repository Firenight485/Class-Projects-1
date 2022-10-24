taxid.o	: taxid.cc	taxid.h
	g++ -std=c++17 -Wall -I . -c taxid.cc
testtaxid.o : testtaxid.cc taxid.h
	g++ -std=c++17 -Wall -I . -c testtaxid.cc
testtaxid : taxid.o	testtaxid.o	taxid.h
	g++ -std=c++17 -Wall -I . taxid.o testtaxid.o -o testtaxid