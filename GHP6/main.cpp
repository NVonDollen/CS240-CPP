/* This program takes in values of dooflingies from the user for 4 weeks, of a considered 7-day work-week and produces results to
compare each day's productions and return certain results about each day's work.
Nicolas VonDollen
April 2016
Language: C++ (g++ target)
Bits of code have been adapted with reference from Nyhoff's book, as well as discussed algorithms and templates
discussed in class with additional assistance.
*/
#include <iostream>
#include <algorithm>
#include <vector>       //allows the use of vectors
#include <numeric>
using namespace std;

int main()
{
    vector<int> dooflingies;  //creates an integer vector called dooflingies
    float sum[28];
    int diff[28];
    int input=0,
    i=0,
    j=0,
    k = 0,
    dayNum=0,   //variable to keep track of which day of the week it is in calculation.
    total=0,    //keeps track of the total # of Dooflingies produced.
    difference=0;   //keeps track of the difference between

/////////////////////////////////////// INPUT/CALCULATIONS ////////////////////////////////////////////////////////////////////
    cout<<"Welcome to the Rinky Dooflingy Company case-counting code!" <<endl <<endl;
    for(i=1;i<5;i++)    //controls the 4-week system.
    {
       for(j=1;j<8;j++) //provides that we are considering 7 days per work week.
       {
            cout <<"Enter the number of Dooflingy cases produced on week " <<i<< ", day " <<j<< ":\t";
            cin >> input;
            dooflingies.push_back(input);
            adjacent_difference(dooflingies.begin(),dooflingies.end(),diff);
         //calculates the difference between dooflingies on a certain day compared to the day before
        cout << "Production level difference compared to yesterday: " <<diff[k] <<endl;
        dayNum++;

    partial_sum(dooflingies.begin(),dooflingies.end(),sum);
    cout <<"Total Dooflingies produced up to current day: " <<sum[k] <<endl;
    cout << endl;
    k++;
        }
    }
    //////////////////////////////////////// END RESULTS //////////////////////////////////////////////////////
    cout <<"Lowest number of Dooflingies: " <<*min_element(dooflingies.begin(),dooflingies.end()) <<endl;
    cout <<"Highest number of Dooflingies: " <<*max_element(dooflingies.begin(),dooflingies.end()) <<endl;
    cout <<"Average number of Dooflingies produced: " <<(sum[27]/28.0) <<endl;

   return(0);
}
