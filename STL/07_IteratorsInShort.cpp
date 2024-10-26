// How to write iterators code in short (using C++ 11)
// Range based loops and auto keyword

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 6, 7};
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // printing the values of the for loop using range based for loop

    for (int value : v) // no reference -- only copy get passed
    {
        value++;
        cout << value << " ";
    }
    cout << endl;
    
    for (int &value : v) // using reference -- actual vlaue comes
    {
        cout << value << " ";
    }
    cout << endl;

    // Printing the pairs
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {4, 5}};
    for (pair<int, int> &val : v_p)
    {
        cout << val.first << " " << val.second << endl;
    }
}
