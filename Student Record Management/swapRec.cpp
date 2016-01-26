#include <headers.h>

void swapRec(Record& rec1, Record& rec2, Record recList[], int i, int j)
{	
	rec1 = recList[i];
	rec2 = recList[j];
	
	recList[i] = rec2;
	recList[j] = rec1;
}
