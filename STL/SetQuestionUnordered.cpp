/*
Given N stirngs and Q queries . IN each querry you are given a stirng print yes if string is present
else print no.
N <= 10^6
|s| <= 100
Q <= 10^6
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
  unordered_set <string> s;
 int n ;
 cout << "enter no. of strings to input : ";
 cin >> n;
 for (int i = 0 ; i < n ; ++i)
 {
    string str ; 
    cin >> (str) ;
    s.insert(str);
 }
 cout<<"Enter no of queries : ";
 int q ; 
 cin >> q;
 while (q--)
 {
    string str;
    cin >> str ;
    if ( s.find(str) == s.end()){
        cout << "no\n";
    }else{
        cout << "yes\n";
    }
 }
}