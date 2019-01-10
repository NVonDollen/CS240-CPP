/*Polymorphic trace for final exam
  Written by Ron
  May 2014
  Language: C++ (g++ compiler)
  Individual functions are not fully documented
     to reduce code size
*/
#include <iostream>
#include <stack>

using namespace std;

class Squirrel
{ public:
    Squirrel()
      {cout<<"Constructing squirrel object "<<endl;
       n=6;
      }

    virtual void start(void)
      {cout<<"inside Squirrel::start"<<endl;
       for (i=0; i<n; i++)
        {cout<<"inside loop i is "<<i<<endl;
         a.push(i*i+4*i-3);
        }
      }

    void display(void)
      {b=a;
       for (i=0;i<n;i++)
         {cout<<b.top()<<"  ";
          b.pop();
         }
       cout<<endl;
      }

protected:  /*these need to be protected so they are accessible
              in the derived class - will not work if declared
              as private...protected means data elements are
              accessible in Squirrel class and any class
              derived from Squirrel; private would be
              accessible only in Squirrel class
           */
  stack<int> a, b;
  int i,n;
};

class Moose: public Squirrel

{public:
   Moose()
     {cout<<"Constructing Moose object"<<endl;
     }

   void start (void)
     {cout<<"Inside Moose::start"<<endl;
      j=n+1;
      n=j;
      for (i=0; i<j; i++)
        { cout<<"Inside loop i is "<<i<<endl;
          a.push(i*4+5);
        }
      }
  private:
     int j;
};

void junk_function (Squirrel & this_squirrel)
{  cout<<"entering junk function"<<endl;
   this_squirrel.start();
   this_squirrel.display();
}

int main(void)
 {Squirrel rocky;
  Moose bullwinkle;
  junk_function(rocky);
  junk_function(bullwinkle);
  return 0;
}
