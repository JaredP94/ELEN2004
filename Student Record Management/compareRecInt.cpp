#include <headers.h>

int compareRecInt(const int A, const int B)
{
	if(A>B)
	{
		return 1;
	}
	
	else if(A==B)
	{
		return 0;
	}
	
	else
	{
		return -1;
	}
}
