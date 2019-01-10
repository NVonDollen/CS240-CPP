#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int fileNumbers[100];
    int i, j, fail, pass;
    i = 0;
    j = 0;
    fail = 0;
    pass = 0;
    char nameOfFile[25];

    cout << "Enter the name of the file to be opened: ";
    cin >> nameOfFile;

    fstream textfile;
    textfile.open(nameOfFile);

    while(! textfile.eof())
    {
        textfile >> fileNumbers[i];
        cout << fileNumbers[i] << endl;
        cout << "i= " << i << endl;
        cout<< endl;
            if(fileNumbers[i] < 66)
                    fail++;
            else
                    pass++;
        i++;
    }
    textfile.close();
    cout << fail << " students out of " << (fail + pass) << " did not pass the exam." << endl;

    return 0;
}
