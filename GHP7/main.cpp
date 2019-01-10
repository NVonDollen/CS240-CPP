/* This is a program to define and implement a hash class that constructs a
23 element array, store the entered strings into the correct positions within the
array, and then search for a specified word within the array. The program also
will ask the user if they wish to continue to search for a word until a sentinel value is reached.
Written by Nick VonDollen
April 2016
Language: C++ (Code::Blocks g++ compiler)
Additional resources for this code include Nyhoff's Queue class to aid in the construction of the
functions as well as additional help from classmates.
*/
#include <iostream>
using namespace std;
#include "hash.h"
int main()
{
    cout<<"|/////////////////////////////////|"<<endl;
    cout<<"|/Welcome to the Hash-class code!/|"<<endl;
    cout<<"|/You will be asked to enter 15///|"<<endl;
    cout<<"|/Strings to an array...//////////|"<<endl;
    cout<<"|//////yg///////////////////////////|"<<endl<<endl;
///////////////////////////////////////////////////////////////////////////
 Hash h1;
    h1.store(); //runs the function to take in and store values into the array.
    h1.display(); //runs the function to display the words stored in the array.
    h1.search(); //runs the function to search for a user-specified word within the array.
return 0;
}
