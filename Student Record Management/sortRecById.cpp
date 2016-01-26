#include <headers.h>

void sortRecById(Record recList[], int& numRead)
{
	int i, j, temp;
	
	for(i = 0; i < numRead-1; i++)
	{
		for(j = 0; j < numRead-1; j++)
		{
			if(recList[j+1].StudId < recList[j].StudId)
			{
				temp = recList[j+1].StudId;
				recList[j+1].StudId = recList[j].StudId;
				recList[j].StudId = temp;
			}
		}
	}
}
			
