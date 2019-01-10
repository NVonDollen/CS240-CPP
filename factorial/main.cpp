#include <iostream>
#include "fact.h"
using namespace std;

int main()
{
    int n, result;
    cout<<"This program finds the factorial of a positive integer "<<endl;
    cout<<"Enter a positive integer"<<endl;
    cin>>n;
    result = fact(n);
    cout<<"The factorial of "<<n<<" is "<<result<<endl;
    return 0;
}
