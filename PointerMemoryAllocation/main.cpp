/*Program to demonstrate basic pointer usage
  Doesn't do anything useful
  Written by Ron
  January 2010

  Language: C++ (g++ target)
*/

#include <iostream>

using namespace std;

int main(void)
{ int rocky, bw, boris;
  int *Iptr1, *Iptr2, *Iptr3, *Iptr4;       //pointers to ints
  rocky=3;
  bw=4;
  boris=rocky+bw;
  Iptr1=&rocky; //Iptr1 is the address of rocky
  Iptr2=&bw;    //Iptr2 is the address of bw
  Iptr3=&boris; //Iptr3 is the address of boris.
  cout<<"Iptr1 is stored in "<< &Iptr1<<
        "and its size is "<<sizeof(Iptr1)<<endl;
  cout<<"Iptr2 is stored in "<< &Iptr2<<
        "and its size is "<<sizeof(Iptr2)<< endl;
  cout<<"Iptr3 is stored in "<< &Iptr3<<
        "and its size is "<<sizeof(Iptr3)<<endl<<endl;
  cout<<"The value of Iptr1 is "<< Iptr1<<
        "and the value in that location is "<< *Iptr1<<endl;
  cout<<"rocky is stored in " << &rocky <<
        "and its value is "<< rocky<<endl<<endl;
  cout<<"The value of Iptr2 is "<< Iptr2<<
        "and the value in that location is "<< *Iptr2<<endl;
  cout<<"bw is stored in " << &bw <<
        "and its value is " << bw<< endl<<endl;
  cout<<"The value of Iptr3 is "<< Iptr3<<
        " and the value in that location is "<< *Iptr3<<endl;
  cout<<"boris is stored in " << &boris<<endl<<endl;
/*Incrementing pointer Iptr3*/
  Iptr3++;
  cout<<"The value of Iptr3 is after incrementing is "<<Iptr3<<endl;
  cout<<"The value pointed to by Iptr3 after incrementing is " <<
         *Iptr3<<endl;
  if (Iptr2==Iptr3)
    cout<<"Iptr2 and Iptr3 point to the same location"<<endl<<endl;
  else
    cout<<"Iptr2 and Iptr3 do NOT point to the same location"<<endl<<endl;

/*Demonstrating use of anonymous variable*/

  Iptr4=new int;
  cout<<"The value of Iptr4 is "<<Iptr4<<endl;
  *Iptr4=boris+3;                               //assign to anonymous var
  cout<<"The value pointed to by Iptr4 is "<< *Iptr4 <<endl;
  cout<<"The size of the data element pointed to by Iptr4 is "<<
        sizeof(*Iptr4)<<endl;
  return 0;
}
