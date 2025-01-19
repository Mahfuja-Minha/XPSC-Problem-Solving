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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll g0 = 0, g1 = 0;
        for (int i = 0; i < n; i += 2)
        {
            g0 = __gcd(g0, a[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            g1 = __gcd(g1, a[i]);
        }

        ll ans = 0;
        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if (a[i] % g0 == 0)

            {
                flag = false;
            }
        }
        if (flag)
        {
            ans = g0;
        }
        else
        {
            flag = true;
            for (int i = 0; i < n; i += 2)
            {
                if (a[i] % g1 == 0)

                {
                    flag = false;
                }
            }
            if (flag)
            {
                ans = g1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
