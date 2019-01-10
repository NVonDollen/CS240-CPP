/*program to read in a word from the user and test whether or not the word
is a palindrome (a word which can be displayed as the same word both forwards and backwards.
Written by Matt Mercado
Nov 2018
Language: C++ (g++ compiler)
Information / assistance from Nyhoff's Queue/Stack .h/.cpp files and in-class handouts.
*/

#include <iostream>
#include <string>
using namespace std;

#include "Stack.h"
#include "Queue.h"
int main(void)
{
    int i = 0;
    Stack s;
    Queue q;
    cout << "Stack created. Empty? " << boolalpha << s.empty() << endl;
    cout << "Queue also created. Empty? " << q.empty() << "\n\n";

    string word;
    cout << "Enter a word to test whether or not it is a palindrome (type in lower-case, the program is case sensitive): ";
    cin >> word;
    cout << endl;

    for(i=0; word.length() > i; i++)
    {
        s.push(word[i]);
        q.enqueue(word[i]);
    }
    cout<<"Displaying the word in REVERSE: ";
    cout<< endl;
    s.display(cout); //Displays the word in reverse
    cout<< endl;

    if(!s.empty() && !q.empty())
    {
        while(!s.empty() && !q.empty())
        {
            if(s.top() == q.front())    //Tests to see if the top of the stack == the front of the queue
            {
                s.pop();
                q.dequeue();
            }
            else
            {
                break; //breaks from the loop.
            }
        }
            if(s.empty() == true && q.empty() == true)
            {
                s.display(cout);        //Will display nothing if the
                q.display(cout);        //stack and queue are both empty.
                cout <<"The word you entered is a palindrome!" << endl;
            }
            else
            {
                cout <<"The word you entered is not a palindrome." << endl;
            }
    }
    else
    {
      cout<< "Stack and/or queue empty. Project has ended.";
    }
    return 0;
}
