all : main

main : searchStrings.h myBFSearch.o CString.o main.o
	g++ -o main myBFSearch.o CString.o main.o -I.

myBFSearch.o : searchStrings.h myBFSearch.cpp
	g++ -c myBFSearch.cpp -I.
	
CString.o : searchStrings.h CString.cpp
	g++ -c CString.cpp -I.
	
main.o : searchStrings.h main.cpp 
	g++ -c main.cpp -I.
	
clean :
	rm-rf *.o *~ main
