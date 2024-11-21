#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        vector<ll> x(n);
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        ll cnt = b;
        for (int i = 0; i < n; i++)
        {
            cnt += min(a - 1, x[i]);
        }
        cout << cnt << '\n';
    }

    return 0;
}