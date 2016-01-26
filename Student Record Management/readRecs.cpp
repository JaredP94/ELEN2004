#include <headers.h>

void readRecs(ifstream& inPutFile, Record recList[], int& numRead)
{
	inPutFile.open("Lab6InputData.txt");
	
	int x,y;
	string i,j;
	numRead = 0;
	
	while (!inPutFile.eof())
	{		
		inPutFile >> x >> i >> j >> y;
		
		if (inPutFile.eof()) break;
		
		recList[numRead].StudId = x;
		recList[numRead].SurName = i;
		recList[numRead].FirstName = j;
		recList[numRead].Mark = y;

		numRead++;
	}
	inPutFile.close();
}
