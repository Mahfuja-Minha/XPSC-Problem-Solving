#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        int l = 0, r = 0, cnt = 0, mnChange = INT_MAX;
        while (r < n)
        {
            if (s[r] == 'W')
            {
                cnt++;
            }
            if (r - l + 1 == k)
            {
                mnChange = min(mnChange, cnt);
                if (s[l] == 'W')
                {
                    cnt--;
                }
                l++, r++;
            }

            else
            {
                r++;
            }
        }
        cout << mnChange << '\n';
    }
    return 0;
}