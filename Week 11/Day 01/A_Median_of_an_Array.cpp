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
        sort(a.begin(), a.end());
        int m = ((n + 1) / 2) - 1;
        int cnt = 0;
        for (int i = m; i < n; i++)
        {
            if (a[i] == a[m])
                cnt++;
        }
        cout << cnt << '\n';
    }

    return 0;
}