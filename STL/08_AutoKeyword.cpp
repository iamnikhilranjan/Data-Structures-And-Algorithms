//use of autokeyword (very important)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (int &vlaue : v)
    {
        cout << vlaue << " ";
    }
    cout << endl;

    // vector <int> :: iterator it;
    // for ( it = v.begin(); it != v.end(); ++it)
    // {
    //     cout << (*it) << " ";
    // }
    // cout << endl;

    for ( auto it = v.begin(); it != v.end(); ++it)
    {
        cout << (*it) << " ";
    }
    cout << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;
}

// auto keyword allows the compiler to automatically deduce the type of a variable from its initializer. 
//⚡(auto keyword + range based loop) combined makes code more concise and easier to read.