#include <headers.h>

int seqSearchById(Record recList[], int& numRead, int rec)
{
	ofstream outfile("output.txt",ios_base::app);
	int i, index;
	double duration;
	clock_t start = clock();
	
	for(i = 0; i < numRead-1; i++)
	{
		if(recList[i].StudId == rec)
		{
			index = i;		
				
			duration = (clock() - start)/(double) CLOCKS_PER_SEC;
	
			outfile << "Time taken to search for student ID using sequential search: " << fixed << setprecision(8) << duration << " sec" << endl << endl;
			
			outfile.close();
			
			return index;
		}
	}
	return -1;
}
