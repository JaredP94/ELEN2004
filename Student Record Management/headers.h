#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

struct Record
{
	int StudId;
	string SurName;
	string FirstName;
	int Mark;
};

void readRecs(ifstream& inPutFile, Record recList[], int& numRead);

int compareRecInt(const int A, const int B);

int compareRecString(const string& A, const string& B);

void swapRec(Record& rec1, Record& rec2, Record recList[], int i, int j);

void sortRecById(Record recList[], int& numRead);

int seqSearchById(Record recList[], int& numRead,int rec);

int binSearchById(Record recList[], int& numRead, int rec);

void printRec(Record recList[], int& start, int& last, int& numRead);
