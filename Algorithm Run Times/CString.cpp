#include <searchStrings.h>

int CString()
{
ifstream inTest("testStrings.txt");
ifstream inSearch("ecoliSmall.txt");
ofstream outTest("results.txt",ios_base::app);
string x;
string y;

inSearch >> y;

int i = 1;

outTest << "Subtstring\t\t" << "No Found in CStringSearch\t\t" << "Time of CStringSearch\t\t" << endl;

while(!inTest.eof()){

inTest >> x;

if (inTest.eof()) break;

int sum = 0;

string::size_type startpos = 0;

double duration;
clock_t start = clock();

while( (startpos = y.find(x, startpos)) != string::npos) 
{
   sum++;
   startpos += x.size();
}

duration = (clock() - start)/(double) CLOCKS_PER_SEC;
    
outTest << "substring" << i << setw(17) << sum << setw(25) << duration << endl;

x[0]='\0';
i++;
}
inTest.close();
inSearch.close();
}
