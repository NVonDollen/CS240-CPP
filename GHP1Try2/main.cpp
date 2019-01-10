/*
This is a program to query the user for a value to be searched for
in a matrix with fixed values within it. The program will tell the user
whether or not the value entered was found within the a[2][2] matrix.
Written by Nicolas VonDollen
Adapted from Q.1, pg 42 -- ADT's Data Structures and Problem Solving with C++
v2.0 -- fixed problem with matrix being declared at run-time instead of compile-time.
January 2016
Language: C++ (gpp target)
*/
#include <iostream>

using namespace std;

int main (void)
{   int value;
    int  a[3][3]; //3x3 array.
    a[0][0] = 0;
    a[0][1] = 5;
    a[0][2] = 10;
    a[1][0] = 15;
    a[1][1] = 20;
    a[1][2] = 25;
    a[2][0] = 30;
    a[2][1] = 35;
    a[2][2] = 40;

    cout<<"Enter an integer value which you believe may be found in the matrix: ";
    cin>>value;

   for(int i=0;i<=2;i++)  //Loop to keep track of rows of the matrix for traversing.
        for(int j=0;j<=2;j++) //Loop to keep track of the col's of the matrix for traversing.
        {
            if(a[i][j] == value)
            {
                cout<<"Checking: ["<<i<< "], [" <<j<<"]: The integer you entered was found within the matrix!!!!!"<<endl;
            }
            else
            {
                cout<<"Checking: ["<<i<< "], [" <<j<<"]: The integer you entered was not found in the matrix."<<endl;
            }
        }

    return 0;
}
