#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s){
 for(string value : s){
    cout << value << endl;
 }
//  for ( auto it = s.begin() ; it != s.end() ; ++it) {
//    cout << (*it) << endl;
//  }
}
int main()
{
 set<string> s;
 s.insert("abc"); // log(n)
 s.insert("zsdf");
 s.insert("bcd");
 s.insert("abc");
 auto it = s.find("abcd"); // log(n)
 if (it != s.end()){
    cout << (*it) ;
    s.erase(it) ;
 }
 s.erase("abc");   //In place of string it can also take iterator as input
 print(s);

}
/*
-SET - set of keys.
     - stores unique elements.(in sorted order).
     - in orderd set - internal implementation using red black trees
                       thus time complexity of insertion , access is O(log(n)) 
     - in unordered set - order doen't matter - only used to check if element is present in the set or not.
                       internal implementation using hash table
                       thus time complexity of insertion , access is O(1) 
     - 3rd type is multiset. Unlike multimaps multisets have many uses in CP.               
*/