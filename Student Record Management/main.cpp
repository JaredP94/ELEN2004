#include <headers.h>

int main()
{
	ifstream inFile;
	Record arrayOfRecords[1000];
	int noOfOccurances, firstPos, endPos, studId = 605079; //studId defines a random student to search for
		
	readRecs(inFile, arrayOfRecords, noOfOccurances);
	
	sortRecById(arrayOfRecords, noOfOccurances);
	
	seqSearchById(arrayOfRecords, noOfOccurances, studId);
	
	binSearchById(arrayOfRecords, noOfOccurances, studId);
	
	printRec(arrayOfRecords, firstPos, endPos, noOfOccurances);
	
	return 0;
}
