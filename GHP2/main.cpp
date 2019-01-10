/* This is a program to create two 3x3 matrices, a and b, and add them together
to create a third matrix, c. After the two are added, display the matrices
and the addition of them.
Nicolas VonDollen
February 2016
Language: (C++ Codeblocks)
*/
#include <iostream>
using namespace std;

int main(void)
{
    int i, j, fillArrayVal,
    a[3][3],         //0,1,2
    b[3][3],         //0,1,2
    c[3][3];         //0,1,2

    cout<<"This program will ask you to fill in\n18 values to fill 2 3x3 matrices and add the two together:\n\n";
///////////////////////////////////////////////////////////////////
//Section of code to fill matrix a
    i=0;
    j=0;
    fillArrayVal=0;
    cout<<"For this 3x3 matrix (a), Enter 9 integer values separated by hitting [Enter]: "<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>fillArrayVal;
            a[i][j] = fillArrayVal;
        }
    }
    cout<<"\n";
///////////////////////////////////////////////////////////////////
//Section of code to fill matrix b
    i=0;
    j=0;
    fillArrayVal=0;
    cout<<"For this 3x3 matrix (b), Enter 9 integer values separated by hitting [Enter]: "<<endl;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cin>>fillArrayVal;
            b[i][j] = fillArrayVal;
        }
    }
cout<<"\n";
///////////////////////////////////////////////////////////////////
    i=0;
    j =0;
    for(i=0;i<=2;i++)  //Outer for loop to print out array a.
    {
        for(j=0;j<=2;j++)   //Inner for loop to print out array a.
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\t+";
    cout<<"\n";
/////////////////////////////////////////////////////////////////////
    i=0;
    j=0;
    for(i=0;i<=2;i++)  //Outer for loop to print out array b.
    {
        for(j=0;j<=2;j++) //Inner for loop to print out array b.
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\t=";
    cout<<"\n";
//////////////////////////////////////////////////////////////////////
//Section of code to add matrix a and b to get the value of matrix c and print it.
    i=0;
    j=0;
    for(i=0;i<=2;i++)   //Outer for loop that adds a[] and b[] and assigns the summation to c[].
    {
        for(j=0;j<=2;j++)   //Inner for loop that adds a[] and b[] and assigns the summation to c[].
        {
            c[i][j] = a[i][j] + b[i][j];
            cout<<c[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
