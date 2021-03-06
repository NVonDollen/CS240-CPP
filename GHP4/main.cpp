/*Written by Nick VonDollen
Version 2.0 -- Fixed errors with (ostream & out) in stack.h file??
Language C++ (g++ target)
Includes Stack.h and Stack.cpp provided by Nyhoff and Ron Sarner
additionally assisted by / Nyhoff in-class references / classmates
March 2016
*/
#include "Stack.h"
#include <iostream>
using namespace std;
#include "Stack.h" //Second include checks for file Stack.h
int main()
{
    int enteredNumber, variable;
    enteredNumber = 0;
    variable = 0;
    Stack numPrime; // Creates a Stack called numPrime.
    cout<<"Stack has been created. Empty? " << boolalpha << numPrime.empty()<< "\n\n"; //checks to see if stack is empty.
                                                                                        //From Stack class handed out in class
    cout<<"Enter the number(integer) you would like to use: " << endl;
    cin>>enteredNumber;
    for(variable=2;variable<=enteredNumber;variable++)
    {
        while(enteredNumber%variable ==0)
        {
            enteredNumber = enteredNumber/variable;
            numPrime.push(variable); // after doing calculation, provides the pushing of the variable to the stack and divides the number by the variable.
        }
    }
    numPrime.display(cout); //Displays numPrime to cout
    return 0;
}
