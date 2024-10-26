#include <bits/stdc++.h>
using namespace std ;

    /*
    Maps aur unordered maps ke saare functions same hi h.
    Defference between ordered and unordered maps :-
     1> Inbuilt implementations -- Inbuilt hash tables are used in unordered maps.
     2> Time comomplexity
        unordered map<int, string> m;
         m[1] = "abc";             // O(1)
         m[6];                     // O(1) -- even ehen no value for the key, default value is taken
        m.erase(5);                // O(1)            
        auto itr = m.find(6);      // O(1)
        if (itr != m.end())
        m.erase(itr);
        print(m);   
     3> valid key datatypes -- In unordered we cannot use complex datatypes like: unordered map <pair<int,int>,string> m ;
     their internal hash functions are not defined.                       
    */

/*Q-Given N strings and Q queries. In each query you are given
    a string print frequency of that string.*/   

// sol - We will use unordered map as it will take less time.     
int main()
{
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        string s;
        cin >> s;
        m[s] ++ ;
    }
    int q ;
    cin >> q ;
    while(q--){
        string s; 
        cin >> s ;
        cout << m[s] << endl ;
    }
}

/*
 multimap:- (not important)
 multimap<pair<int,int>, string > m;
 no unique keys. 
*/
