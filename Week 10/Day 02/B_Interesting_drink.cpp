#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{

    int n, q;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    cin >> q;
    // vector<ll> p(n);
    // p[0] = a[0];
    // for (int i = 1; i < n; i++)
    // {
    //     p[i] = a[i] + p[i - 1];
    // }
    for (int i = 0; i < q; i++)
    {
        ll x, l = 0, r = n - 1, ans = -1;
        cin >> x;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] <= x)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans + 1 << '\n';
    }

    return 0;
}