/*Program to illustrate binary search using a manually
  created linked list of randomly generated numbers

  Approach:  create a list of randomly generated elements
             sort the list
             query the user for a target value
             use binary search to determine if target value
                is in the list
             model the list in a deque

  Written by Ron
  Version 2.0 (corrected version)
  April 2010
  Language: C++ (g++ target)
*/

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

typedef struct node
 {int data;
  node * next;
 };

int main(void)
{deque<int>a;
 int i,
     first,
     last,
     loc,
     value;
 node *head, *p1, *p2, *pfirst, *plast, *locptr;
 bool found;
 for (i=0;i<1000;i++)
   a.push_back(rand()%1000);
 sort(a.begin(),a.end());
 cout<<"data sorted, building linked list"<<endl;
 head=new(node);
 head->data=a[0];
 head->next=NULL;
 for (i=1;i<1000;i++)
   {p1=head;
    while (p1->next!=NULL)
      p1=p1->next;
    p2=new(node);
    p2->data=a[i];
    p2->next=NULL;
    p1->next=p2;
   }
 cout<<"linked list built"<<endl;
 p1=head;
 for (i=0;i<1000;i++)
     p1=p1->next;
 cout<<"enter search value ";
 cin>>value;
 found=false;
 pfirst=head;
 first=0;
 last=999;
 while ((first<=last)&&(!found))
   {loc=(first+last)/2;
    locptr=head;
    cout<<"searching positions "<<first<<" to "<<last<<endl;
    for (i=0;i<=loc;i++)
       locptr=locptr->next;
    cout<<"value pointed to in position "<<loc<<" is "<<locptr->data<<endl;
    if (value<locptr->data)
       {last=loc-1;
       }
    else if (locptr->data<value)
       {first=loc+1;
       }
    else
       found=true;
    }
 if (found)
    cout<<value<<" found in position "<<loc<<endl;
 else
    cout<<value<<" not found "<<endl;
 system("Pause");
 return 0;

}
