#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while ((t--))
    {
        ll n, m, h;
        cin >> n >> m >> h;
        ll a[n];
        ll b[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(a, a + n, greater<>());
        sort(b, b + m, greater<>());

        ll sum = 0;
        ll mn = min(n, m);

        for (int i = 0; i < mn; i++)
        {
            sum += min(b[i] * h, a[i]);
        }
        cout << sum << '\n';
    }

    return 0;
}