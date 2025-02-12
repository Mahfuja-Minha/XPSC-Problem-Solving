#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        ll d = r - l;

        ll a = 0, b = d, ans = -1;
        while (a <= b)
        {
            ll mid = (a + b) / 2;
            if (mid * (mid - 1) / 2 <= d)
            {
                ans = mid;
                a = mid + 1;
            }
            else
            {
                b = mid - 1;
            }
        }
        cout << ans + 1 << '\n';
    }

    return 0;
}
