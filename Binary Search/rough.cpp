#include <bits/stdc++.h>
using namespace std;

void insertionSort(int n, vector<int> arr)
{
    for (int i = n-2 ; i >= 0; i--){
        int key = arr[i];
        int hole = i;
        while(hole<n-1 && arr[hole+1] > key){
           arr[hole] = arr[hole+1];
           for (int i = 0 ; i  < n ; i++){
            cout<<arr[i]<<" ";
           }
        }
        arr[hole] = key;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    insertionSort(n, arr);
}