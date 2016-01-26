#include <headers.h>

void printRec(Record recList[], int& start, int& last, int& numRead)
{
	ofstream outfile("output.txt",ios_base::app);
	
	start=0;
	last=10;
	
	outfile << "Number of processed records: " << numRead << endl << endl;
	
	for(start; start < last; start++)
	{
		outfile << "Student ID: " << recList[start].StudId << endl;
		outfile << "Surname: " << recList[start].SurName << endl;
		outfile << "First Name: " << recList[start].FirstName << endl;
		outfile << "Mark: " << recList[start].Mark << endl << endl;
	}

	outfile.close();
}
