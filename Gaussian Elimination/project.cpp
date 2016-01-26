#include <iostream>		//Including required header files for program
#include <cmath>
#include <fstream>

using namespace std;

int i,j,k,n,z;		//Defining global variables
double m,sum,matA[10][10],x[10];		//Partially initialising arrays for future use

ifstream inFile("testData.dat");		//Declaration of file streaming as well as input & output data files
ofstream outFile("output.txt");

void functRead()		//Function that will determine the size of each matrix and store it in a multidimensional array
{
    inFile >> n;		//Reading size of matrix from input file
    matA[n][n]; 	//Defining size of square matrix in multidimensional array

    for(i=1; i<=n; i++)		//Loop which will read values from file and store them into the array
    {
        for(j=1; j<=n+1; j++)
        {
            inFile >> z;        //Reads the next value from data file until white space is reached
            matA[i][j]=z;       //Assigns each value to the multidimensional array
        }
    }
}

void functGauss()		//Function that processes augmented matrix into triangular echelon form
{
    for(j=1; j<=n; j++)		//Loop which allows for the operations to be carried out
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                m=matA[i][j]/matA[j][j];
                for(k=1; k<=n+1; k++)
                {
                    matA[i][k]=matA[i][k]-m*matA[j][k];
                }
            }
        }
    }
    x[n]=matA[n][n+1]/matA[n][n];		//Calculates an x value from triangular echelon operations (eliminates coefficient of the x variable)
}

void backSubstitute()		//Function that derives solutions of x using back substitution
{
    for(i=n-1; i>=1; i--)		//Loop which controls back substitution
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum+=matA[i][j]*x[j];
        }
        x[i]=(matA[i][n+1]-sum)/matA[i][i];		//Final values obtained for each x variable
    }
}

void functResult()		//Function that will assess and writes results to output file
{
    outFile << "The solution to the " << n << " by " << n << " matrix is: \n";

    for(i=1; i<=n; i++)		//Loop to print out results for each x variable
    {
        if(isnan(x[i]))		//Condition to check if the solution is defined or not
        {
            outFile << "There is no unique solution" << endl;
            break;
        }
        else
        {
            outFile << "x" << i << " = " << x[i] << endl;
        }
    }
    outFile << endl;
}

int main()		//Main function which uses the user defined functions
{

   while(!inFile.eof())		//Loop to carry out Gaussian elimination as long as data is inputted from file
   {
        if(inFile.eof()) break;		//Conditional statement to break the loop if all data is inputted

        functRead();		//Use of defined functions to solve each matrix in data file

        functGauss();

        backSubstitute();

        functResult();
    }

    inFile.close();		//Closes files once program has completed
    outFile.close();

    cout << "Matrices solved! Check output file for results!" << endl;		//Notification of success of matrix solving

    return 0;		//Terminates main function
}
