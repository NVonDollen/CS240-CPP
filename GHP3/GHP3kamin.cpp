/*
* This program was developed read the number of vowels in a plaintext file
* Written by Kamin J. Fay
* March 4th, 2016
* Version 1.2 Fixed Fortmatting and Comments
* Language: C++ (G++ target)
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int argc, char *argv[])
{

	 /*
  * This function was developed to get the input of a file,
  * check the file for vowels and output the results.
  * Written by Kamin J. Fay
  * March 4th, 2016
  * Language: C++ (G++ Target)
  */

	string fileName;
	char letter;
	int numV = -0;  //not sure why, but when I set my counter to 0 and run on my machine
					//it always counts one extra vowel setting it to -1 fixes that problem
					//but I am not sure why that problem exists.


	cout << "This program will count the number of vowels in a text file." << endl;
	cout << "Please use the format (readme.txt) for inputing your file name." << endl;
	cout << "Please input the name of the file you would like to open: " << endl;
	cin >> fileName; //gets file name


	ifstream inFile(fileName.c_str());

	if (!inFile.is_open())
	{
		cout << "The file could not be opened" << endl; // failsafe in case file cant be opened
	}else
		{
			while (!inFile.eof()) //Check to make sure not at the end of file
			{
				inFile.get(letter); // Gets each character found info on this @ https://linuxconfig.org/c-code-on-how-to-read-characters-from-a-file

				//Tests for vowel
				if(letter == 'a' || letter == 'A' || letter == 'e' || letter == 'E' || letter == 'i' ||
					letter == 'I' || letter == 'o' || letter == 'O' || letter == 'u' || letter == 'U')
				{

					numV++; //Iterates the vowel counter

				}


			}
		}

	cout << "The number of vowels in this file is: " << numV << endl; // Output

	inFile.close(); // makes sure to close the file when done

	return 0;
}
