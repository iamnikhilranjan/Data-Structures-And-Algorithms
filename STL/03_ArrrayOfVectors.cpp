//array of vectors
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
    cout << "Enter number of vectors to create in an array : " ;
    cin >> N;
    vector<int> v[N]; //N vectors of size 0 created
    for (int i = 0; i < N; i++)
    {
        //take input of vectors
        int n;    //size of vector
        cout << "Enter size of vector " << i+1 << " : " ; 
        cin >> n;
        cout << "Enter it's elements : " ;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for (int i = 0; i < N; ++i)
    {
        printvec(v[i]);
    }
    cout<<v[1][2];
}
/*
vector <int> v -->  vectors
vector <int> v[i] --> array of vectors
*/