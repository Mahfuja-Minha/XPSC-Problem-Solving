#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == 0)
            continue;
        if (a[i - 1] * 2 > a[i])
        {
            cout << "NO" << '\n';
            return;
        }
        else
        {
            a[i] -= (2 * a[i - 1]);
            a[i + 1] -= a[i - 1];
            a[i - 1] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}