//vectors - array having dynamic size.

// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void printvec(vector<int> v) --> only copy get passed

void printvec(vector<int> &v)
{
    cout << "Size: "<< v.size()<< endl;
    for (int i = 0; i < v.size(); i++)
    {
        // v.size() -> O(1)
        cout<<v[i]<<" ";
    }
    v.push_back(2); //Value only changes in the function
    cout<<endl;
    
}

int main(){
    // vector<int> v; -- vector of int. 
    // vector<int,int>; -- vector of pair.

    // int n;
    // cin>>n;
    // for(int i = 0; i<n ; ++i)
    // {
    //     int x;
    //     cin>>x;
    //     printvec(v);
    //     v.push_back(x);   //O(1)
    // }
    // printvec(v);

    //vector<int> v ; -- empty
    // vector<int> v(10);   -- initializes first 10 element of the vector = 0
    vector<int> v(10,3);  // -- initializes first 10 element of the vector = 3
    v.push_back(7);      
    printvec(v);
    v.pop_back();   //-->Removes the lastmost element of the vector
    printvec(v);    //O(1)

    // vector<int> v2 = v; ---it copies v to v2. //O(n) *****
     
    vector<int> &v2 = v; //O(n) not copy but actual vector get passed.

    v2.push_back(5);
    printvec(v);
    printvec(v);
    printvec(v2);

    return 0;
}
/* NOTES:-
 - vector are Similar to arrays 
 - size of vectors can change -- dynamic
 - Vectors can be copied directly (array can not be copied, pointers of an array can be copied)
*/

//functions me vector pass karte wakt dhyan rakhna ki directly copy pass mt krna (void fnt( vector<int> V)) because it's time complexity is O(n).
//instead pass the reference (void ftn( vector<int> &V)) -- agr original vector modify karne se koi problem na ho tho.