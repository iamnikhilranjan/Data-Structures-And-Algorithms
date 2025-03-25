#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {   
        int n;
        string s;
        cin >> n >> s;
        int totalDot = 0;
        int maxDots = 0;
        int ans = 0;
        for (auto ch : s)
        {
            if (ch == '.')
            {
                totalDot++;
                maxDots++;
                if (maxDots >= 3)
                {
                    ans = 2;
                    break;
                }
            }
            else
            {
                maxDots = 0;
            }
        }
        if(ans != 0) cout << ans << endl;
        else cout << totalDot << endl;
    }
}