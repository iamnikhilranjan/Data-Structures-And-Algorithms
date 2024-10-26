// Pairs and Vectors
#include <iostream>
using namespace std;
 int main()
 {
    pair<int,string> p;
    //two ways to put values in pairs
    //p = make_pair(2,"abc");
    p={2,"abc"};

    // pair<int, string> p1 = p;  -- copy of p get stored in p1.
    pair<int, string> &p1 = p;   /*using reference means same thing in both the variables*/
    p1.first = 3;
    cout<<p.first<<" "<<p.second<<endl;

    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3]; // array of pairs
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for(int i=0;i<3; i++)
    {
     cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
 return 0;
 }

 /*Notes:
  - kisi bhi do datatypes ya containers ka pairs bna sakte h.
  - Why pairs needed ? -- to maintain relation between two things 
 */