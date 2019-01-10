/*
This is a program to query the user for a value to be searched for
in a matrix with fixed values within it. The program will tell the user
whether or not the value entered was found within the a[2][2] matrix.
Written by Nicolas VonDollen
Adapted from Q.1, pg 42 -- ADT's Data Structures and Problem Solving with C++
January 2016
Language: C++ (gpp target)
*/
#include <iostream>

using namespace std;

int main (void)
{   int value;
    int  a[3][3]; //matrix 3x3
    a[0][0] = 0; // there
    a[0][1] = 5; // there
    a[0][2] = 10;
    a[1][0] = 15; // there print2x
    a[1][1] = 20; // there
    a[1][2] = 25; //
    a[2][0] = 30; // there print2x
    a[2][1] = 35; // there
    a[2][2] = 40; // there
    a[3][0] = 45;
    a[3][1] = 50;
    a[3][2] = 55;

    cout<<"Enter an integer value which you believe may be found in the matrix: ";
    cin>>value;

   for(int i=0;i<=2;i++)  //Loop to keep track of rows of the matrix for traversing.
        for(int j=0;j<=2;j++) //Loop to keep track of the col's of the matrix for traversing.
        {
            if(a[i][j] == value)
                cout<<"The integer you entered was found within the matrix!"<<endl;

            else
                cout<<"The integer you entered was not found within the matrix"<<endl;
        }
    return 0;
}
