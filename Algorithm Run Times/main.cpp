#include <searchStrings.h>

int main()
{
ofstream outTest("results.txt",ios_base::app);
myBFSearch();
CString();
outTest << "\n The third string is found a different amount of times in each method due to the fact that brute force accounts for overlapping occurances where as the c-string method does not allow for overlapping to occur is searching for the required string";
outTest.close();
return 0;
}
