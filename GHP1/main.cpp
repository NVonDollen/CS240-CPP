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
{
    int row, col, value;
    row = 2;
    col = 2;
    bool found;
   int   a[row][col];
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

        if (value == a[0][0] || value == a[0][1] || value == a[0][2] || value == a[1][0] || value == a[1][1] || value == a[1][2]
            || value == a[2][0] || value == a[2][1] || value == a[2][2])
        {
            cout<<"The value you entered has been found!";

        }
        else
        {
            cout<<"The value you entered was not found in the matrix.";

        }
    return 0;
}

