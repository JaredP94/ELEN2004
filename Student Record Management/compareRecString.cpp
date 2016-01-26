#include <headers.h>

int compareRecString(const string& A, const string& B)
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
