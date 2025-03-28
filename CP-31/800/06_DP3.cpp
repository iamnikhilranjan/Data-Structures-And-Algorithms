#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        unordered_map<int, int> mp;
        
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        if (mp.size() == 1)
        {
            cout << "Yes" << endl;  
        }
        else if (n % 2 == 0 && mp.size() == 2)
        {
            auto it = mp.begin();
            int freq1 = it->second;
            int freq2 = (++it)->second;
            if (freq1 == n / 2 && freq2 == n / 2)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else if (n % 2 != 0 && mp.size() == 2)
        {
            auto it = mp.begin();
            int freq1 = it->second;
            int freq2 = (++it)->second;
            if ((freq1 == (n + 1) / 2 && freq2 == (n - 1) / 2) ||
                (freq2 == (n + 1) / 2 && freq1 == (n - 1) / 2))
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}
