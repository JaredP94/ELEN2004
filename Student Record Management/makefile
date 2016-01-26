all: compare clean

compare: headers.h readRecs.o compareRecInt.o compareRecString.o swapRec.o sortRecById.o seqSearchById.o binSearchById.o printRec.o main.o
	g++ -o main readRecs.o compareRecInt.o compareRecString.o swapRec.o sortRecById.o seqSearchById.o binSearchById.o printRec.o main.o -I.
	
main.o: headers.h main.cpp
	g++ -c main.cpp -I.

readRecs.o : headers.h readRecs.cpp
	g++ -c readRecs.cpp -I.

compareRecInt.o : headers.h compareRecInt.cpp
	g++ -c compareRecInt.cpp -I.

compareRecString.o : headers.h compareRecString.cpp
	g++ -c compareRecString.cpp -I.

swapRec.o : headers.h swapRec.cpp
	g++ -c swapRec.cpp -I.

sortRecById.o : headers.h sortRecById.cpp
	g++ -c sortRecById.cpp -I.

seqSearchById.o : headers.h seqSearchById.cpp
	g++ -c seqSearchById.cpp -I.

binSearchById.o : headers.h binSearchById.cpp
	g++ -c binSearchById.cpp -I.

printRec.o : headers.h printRec.cpp
	g++ -c printRec.cpp -I.
	
AR = ar
CC = gcc

objects := readRecs.o compareRecInt.o compareRecString.o swapRec.o sortRecById.o seqSearchById.o binSearchById.o printRec.o

libStudRec.a : headers.h $(objects)
	$(AR) rcu $@ $(objects)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean: 
	rm output.txt
