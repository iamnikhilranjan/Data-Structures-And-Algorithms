#include <bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
    for (string vlaue : s ){
        cout << vlaue << endl;
    }
}
int main()
{
    multiset<string> s;
    s.insert ("abc");    // o(log(n))
    s.insert ("zsdf");
    s.insert ("bcd");
    s.insert ("abc");

    // auto it = s.find("abc");       // o(log(n))
    // if (it != s.end()){               
    //     s.erase(it);       //-->will only erase the element that it points
    // }
    
    s.erase("abc");                      // -- all the key 
    print(s);
}
// multiset allows you to store multiple key values
//     -  multiset - Unlike multimaps multisets have many uses.   (important)               
