/*Program to find the prime factorization of an input value
By Taylor Hines
Version 1
Language C++
From Nyhoff's Stack class information
October 2016*/
#include "Stack.h"
#include <iostream>
using namespace std;
#include "Stack.h"
int main()
{
    //Initialize variables
    int inputNumN, variableD;
    inputNumN = 0;
    variableD = 0;
    Stack numPrime;

    //check to see if the Stack is empty
    cout<<"Stack created. Is it empty? " << boolalpha <<numPrime.empty()<< "\n";

    //Ask the user for integer input for the variable inputNumN.
    cout<< "Please enter an integer: ";
    cin>> inputNumN;

    //Write a for loop that starts variableD to 2, and runs up to and including the value entered for inputNumN
    for( variableD= 2; variableD <= inputNumN; variableD++)
    {
    //Write a while loop within the for loop to run while inputNumN % variableD is 0.
     while (inputNumN % variableD ==0)
        {
        // Change the value of the inputNumN to be the quotient of inputNumN and variableD.
        inputNumN= inputNumN/variableD;
        //Push the value for variableD onto the stack.
        numPrime.push(variableD);
        }
    }
    //Display the values of the stack.
    cout<<"The numbers in the stack are:\n";
    numPrime.display(cout);
return 0;
}
