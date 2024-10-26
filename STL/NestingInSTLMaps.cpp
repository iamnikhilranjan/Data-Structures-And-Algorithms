#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string,string>,vector<int>> m;
    //set<pair<int,int>> s ; //similarly nesting can be done in sets
    cout << "Enter number of names for input : ";
    int n;
    cin>>n;
    cout << "Enter "<<n<< "names : "<<endl;
    for (int i = 0 ; i < n ; ++i){
        string fn , ln ;
        cout << "Enter name : ";
        cin >> fn >> ln;
        int ct;
        cout << "Number of subjects : ";
        cin >> ct;
        cout << "Enter marks in "<<ct<<" number of subjects : ";
        for (int j = 0 ; j<ct ;++j){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &pr : m){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " <<full_name.second <<endl;
        cout << list.size() << endl;
        for(auto &element : list){
            cout << element << " ";
        }
        cout << endl;
    }
}