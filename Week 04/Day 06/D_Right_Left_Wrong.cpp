#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int m;
            cin >> m;
            a[i] = a[i - 1] + m;
        }

        string s;
        cin >> s;

        ll result = 0;
        int l = 0, r = n - 1;

        while (r > l)
        {

            while (l < n && s[l] == 'R')
            {
                l++;
            }

            while (r >= 0 && s[r] == 'L')
            {
                r--;
            }

            if (l < r)
            {
                result += a[r + 1] - a[l];
                l++;
                r--;
            }
        }

        cout << result << '\n';
    }

    return 0;
}
