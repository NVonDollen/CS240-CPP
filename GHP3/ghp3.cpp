/*Program which reads a file of plaintext from the user, reads it in as a string,
  displays it, and outputs the number of vowels in the string.
  Written by Nick
  Some adaptation of Fig 5-1 from Nyhoff
  Additional adaptation from in-class handout from Ron Sarner
  February 2016
  Language: C++  (g++ target)
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cassert>
#include <cstdio>
using namespace std;

int main(void)
{int i, j, vowelNumber;
 vowelNumber = 0;
 string inputFileName;      //Name of the desired file.
 string strn;        //file (string)
 ifstream fileIn;        //input-file stream.
 char ch;
 cout<<"Enter name of file of characters (filename.txt): ";
 cin>>inputFileName;
 fileIn.open(inputFileName.data());
 assert(fileIn.is_open() );
 i=0;
   while (!(fileIn.eof()))
  {ch=fileIn.get();
   strn.insert(i,1,ch);   //insert character at position i-- H,i,_,m,y,_,n,a,m,e,_,i,s,_,n,i,c,k..... (using my custom GHP3.txt file)
   i++;
  }
  /*Section of code to traverse the string (file.txt) until the string = NULL. As the string gets traversed, the two "if" statements
  check to see if there are any vowels.
  Written by Nick
  Additional information and assistance provided by programiz.com
  February 2016
  Language: C++(g++ target)
  */
  for (int i=0; strn[i]!= '\0'; i++)
      {
        if (strn[i]== 'a' || strn[i] == 'e' || strn[i] == 'i' || strn[i] == 'o' || strn[i] =='u') //Loop to check the file/string for lowercase vowels.
            {
            vowelNumber++;
            }
        if (strn[i]== 'A' || strn[i] == 'E' || strn[i] == 'I' || strn[i] == 'O' || strn[i] =='U') //Loop to check the file/string for uppercase vowels.
            {
            vowelNumber++;
            }
      }
    cout<<endl;
 //cout<<strn;     Prints the "string" (entire text file)
 cout<<"# of vowels: "<<vowelNumber<<endl;

 return 0;
}

