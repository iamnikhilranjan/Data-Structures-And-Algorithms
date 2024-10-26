#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
    // loop ka TC - n(log(n)) hai
}
int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[6]; // O(log(n)) -- even when no value for the key, default value is taken
    m.insert({4, "afg"});
    m[5] = "fre";

    // m["abcd"] = "abcd"; // s*size() * log(n)

    // map<int,string> :: iterator it;
    // for (it=m.begin() ; it !=m.end() ; ++it){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    // for (auto &pr : m){
    //     cout << pr.first << " " << pr.second << endl;
    // }

    print(m);

    auto it = m.find(3);      // O(log(n)) // find() returns an iterator

    if (it == m.end())
    {
        cout << "No vlaue" << endl;
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    
    m.erase(5);                //O(log(n))    
    //erase - 2 type me input le sakta h > 1.key > 2.iterator  

    auto itr = m.find(6);
    if (itr != m.end())
    m.erase(itr);
    print(m);        

    m.clear();                //clears the map
    print(m);

    cout << endl;
}

/*
 *maps - DS that stores key value pairs.
 *Maps are of three types :-
 *maps are in pairs (key and value)
 *Like vectors elements of maps are not continious.
 *Maps are stored in sorted order. ( noraml map - red black trees - internal implemantation)
 *If vlaue is not provided like : m[6] then by default value will be 0 for int,float,double and for stirng a empty string
 *All the keys of a map are unique. Incase of same key statement the value will be overwritten.
 *In maps time complexity of insertion as well as to access values is O(log(n)).
 */