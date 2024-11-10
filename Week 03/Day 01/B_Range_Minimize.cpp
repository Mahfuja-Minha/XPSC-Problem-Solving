#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int d1 = a[n - 1] - a[2];
        int d2 = a[n - 2] - a[1];
        int d3 = a[n - 3] - a[0];
        int ans = min({d1, d2, d3});
        cout << ans << '\n';
    }
    return 0;
}
