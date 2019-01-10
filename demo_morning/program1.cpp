// Documentation
// Goes
// Here
// !!!!!!!!!!!

#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    int a;
    double b;
    char c;
    char d[20];
    int len_of_string;

    cout<<"Enter an integer: ";
    cin>>a;
    cout<<"Enter a real(decimal) number: ";
    cin>>b;
    cout<<"Enter a character: ";
    cin>>c;
    cout<<"Enter a string: ";
    cin>>d;

    len_of_string = strlen(d); //strlen comes from "#include <cstring>
    cout<<"\nThe integer is "<<a<<" the real is "<<b<<endl;
    cout<<"The character is "<<c<<" the real is "<<d<<endl;
    cout<<"The length of the string is "<<len_of_string<<endl;
    return 0;

}
