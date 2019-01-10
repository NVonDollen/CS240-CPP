/*--Hash.h-----------------------------
Header file that defines a Hash class.
Written by Nick
April 2016
Language C++ (Code::Blocks g++ compiler)
---------------------------------------*/
#include <iostream>
#ifndef HASH
#define HASH
#include <string.h>

using namespace std;
class Hash
{
public:
    Hash();
/*------------------------------------
    Instanced Hash class.
    Written by Nick
    April 2016
    Language C++ (Code::Blocks g++ compiler)
*/
    void store();
/*------------------------------------
    Stores the entered values into the array via the
    hashing function.
    Written by Nick
    April 2016
    Language C++ (Code::Blocks g++ compiler)
*/
    void display();
/*------------------------------------
    Displays the values in the array in the order which they
    have been stored.
    Written by Nick
    April 2016
    Language C++ (Code::Blocks g++ compiler)
*/
    void search();
/*
    Searches the array for the specified value and tells the
    user where it is located.
    Written by Nick
    April 2016
    Language C++ (Code::Blocks g++ compiler)
*/
private:
    string myArray[23]; //Reserves space for a 23 element array of strings.
};
#endif
