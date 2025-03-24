#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k ;
        vector <int> a(n, 0);
        int flag = 0;
        for(int i = 0; i < n; i++) {
            int x ;
            cin >> x;
            a[i] = x;
            if(i == 0) continue;
            else if(a[i-1] > a[i]) flag = 1;
        }
        if(flag == 0) cout << "YES" << endl;
        else if( k <= 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}