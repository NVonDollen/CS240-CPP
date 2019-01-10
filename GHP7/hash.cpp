/*Implementation file to allow the store(), display(), and search()
functions to be built.
Written by Nick VonDollen
April 2016
Language: C++ (Code::Blocks g++ compiler)
Additional resources for this code include Nyhoff's Queue class to aid in the construction of the
functions as well as additional help from classmates.
*/
#include <iostream>
#include <string.h>
#include <algorithm>
#include "hash.h"

using namespace std;
Hash::Hash()
{}
void Hash::display()
//Function to display the contents of the 23 element array.
//Written by Nick VonDollen
//April 2016
//Language: C++ (Code::Blocks g++ compiler)
{
    for(int i=0; i<23; i++)
        cout<<i<<": "<<myArray[i]<<endl;
}
///////////////////////////////////////////////////////////////////////////////////////////
void Hash::store()
//Function to read in strings from the user and store them within the 23 element array
//Written by Nick VonDollen
//April 2016
//Language: C++ (Code::Blocks g++ compiler)
{
    string inputValue;
    bool stored = false;
    int counter = 0;
    while(counter != 15)
    {
        cout<<"Enter a string: ";
        cin>> inputValue;
        int position = (inputValue[0] + inputValue[inputValue.length()-1]) % 23;
        stored = false;
        while(stored == false)
        {
            if(myArray[position].empty())
            {
             myArray[position] = inputValue;
             stored = true;
            }
                else if(position == 22)
                {
                    position = 0;
                }
                    else
                    {
                        position++;
                    }
        }
        counter++;
    }
}
//////////////////////////////////////////////////////////////////////////////////////
void Hash::search()
//Function to search the array for a specified string within the array and tell the user whether or
//not it was found.
//Written by Nick VonDollen
//April 2016
//Language: C++ (Code::Blocks g++ compiler)
{
    bool done = false;
    char continueInput;
    int counter = 0;
    while(done == false)
    {
    bool found = false;
    string input;

    cout<<"Enter a word to search for within the array: ";
    cin>>input;
    int h = (input[0] + input[input.length()-1])%23; //sets the hash value in the search function.
    while(found == false)
    {
        if(myArray[h].empty())
        {
            cout<<"Requested word not found!"<<endl;
            found = true;
        }
            if (myArray[h] == input)
            {
                cout << "Word found at position " <<h<<endl;
                found = true;
            }
            else if(h == 22)
            {
                h = 0;
            }
                else
                {
                    h++;
                    counter++;
                }
        if(counter == 22)
        {
            cout<<"Requested word not found!";
            found = true;
        }
    }
   cout << "Continue searching for a value? (enter y or n): ";
   cin >> continueInput;
        if(continueInput == 'n' || continueInput == 'N')
        {
            done = true;
        }
        if(continueInput == 'y' || continueInput == 'Y')
        {
            done = false;
        }
    }
}
