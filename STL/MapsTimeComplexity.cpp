#include <bits/stdc++.h>
using namespace std;

// int main()
// {   map <int,string> m1;
//     m1[1] = "ejdu" ;       //O(log(n))

//     map <string,string> m2;
//     m2["asdse"] = "dehbs" ; //s.size() * log(n) -- time for comparision of key strings get added
// }

/*
Q-Given N strings, print unique stirngs in lexigraphical order
  with their frequency
   N <= 10^5
  |s| <= 100
*/
int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        string s;
        cin >> s;
        // m[s] = m[s] + 1;
        m[s]++;
    }
    for(auto pr: m){
        cout << pr.first << " " << pr.second << endl;
    }
}