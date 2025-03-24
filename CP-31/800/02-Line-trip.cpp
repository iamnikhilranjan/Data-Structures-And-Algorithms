#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x, maxDiff = 0;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n ; i++) {
            cin >> arr[i];
            if(i>0){
                maxDiff = max(maxDiff, arr[i] - arr[i-1]);
            }
        }
        maxDiff = max((arr[0]-0), max(maxDiff, 2*(x-arr[n-1])));
        cout << maxDiff << endl;
    }
}