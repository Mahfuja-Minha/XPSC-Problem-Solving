#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += upper_bound(a.begin(), a.end(), r - a[i]) - a.begin();
            ans -= lower_bound(a.begin(), a.end(), l - a[i]) - a.begin();
            if (l <= 2 * a[i] && 2 * a[i] <= r)
            {
                ans--;
            }
        }
        cout << ans / 2 << "\n";
    }

    return 0;
}
