#include <headers.h>

int binSearchById(Record recList[], int& numRead, int rec)
{
	ofstream outfile("output.txt",ios_base::app);
	int index, mid, first=0, last=numRead-1;
	double duration;
	clock_t start = clock();

	mid = (first+last)/2;

	while(recList[mid].StudId != rec && first <= last)
	{
		if(recList[mid].StudId > rec)
		{
			last = last-1;
		}
		else
		{
			last = last+1;
		}
		mid = (first+last)/2;
	}

	duration = (clock() - start)/(double) CLOCKS_PER_SEC;
	
	outfile << "Time taken to search for student ID using binary search: " << fixed << setprecision(8) << duration << "sec" << endl << endl;
	outfile.close();
	
		if(recList[mid].StudId == rec)
	{
		index = mid;
		return index;
	}
	else
	{
		return -1;
	}	
}
