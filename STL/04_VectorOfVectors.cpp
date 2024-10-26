#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v)
{
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    cout << "Enter number of vectors to create in a vector : " ;
    cin >> N;
    vector<vector<int>> v;
    for (int i = 0; i < N; i++)
    {
        int n; 
        cout << "Enter size of vector " << i+1 << " : " ; 
        cin >> n;                   // We can also create vector inside a another vector by following method :-
        vector<int> temp;           // v.push_back(vector<int>());
        cout << "Enter it's elements : " ;
        for (int j = 0; j < n; j++) // for(int j=0 ; j<n ; j++)
        {                           //{
            int x;                  //  int x;
            cin >> x;               //  cin>>x;
            temp.push_back(x);      //  v[i].push_back(x);
        }                           //}
        v.push_back(temp);
    }
    v[0].push_back(10);
    v.push_back(vector<int>());  //empty vector pushed back
    for (int i = 0; i < v.size(); ++i)
    {
        printvec(v[i]);
    }
    cout << v[0][1];
}
/*
Array of array -- number of rows and columns are fixed.
Array of vectors -- number of rows fixed but number of columns is dynamic.
vector of vector --> no of rows as well as column is dynamic.
*/