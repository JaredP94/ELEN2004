#include <searchStrings.h>

int myBFSearch()
{		
		string x;
		string y;
		
		ifstream inTest("testStrings.txt");
		ifstream inSearch("ecoliSmall.txt");
		ofstream outTest("results.txt",ios_base::app);
		int k = 1;
		
		outTest << "Subtstring\t\t" << "No Found in myBFSearch\t\t" << "Time of myBFSearch\t\t" << endl;
		
		inSearch >> y;
		
		while(!inTest.eof()){
		inTest >> x;
		
		if(inTest.eof()) break;
		
    int m = x.length();
    int n = y.length();
    int sum = 0;
    double duration;
		clock_t start = clock();
    
    for (int startpos = 0; startpos <= n-m; ++startpos) {
        int j = 0;
        while (j < m && x[j]==y[startpos+j]) {
            ++j;
        }
        if (j == m) {
            sum++;
        }
    }
    duration = (clock() - start)/(double) CLOCKS_PER_SEC;
    
outTest << "substring" << k << setw(17) << sum << setw(25) << duration << endl;

x[0]='\0';
k++;
}
outTest << endl;
inTest.close();
inSearch.close();
}
