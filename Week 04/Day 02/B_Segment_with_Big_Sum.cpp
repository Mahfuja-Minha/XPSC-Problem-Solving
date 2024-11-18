#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 0, sum = 0, result = INT_MAX;
    bool flag = false;
    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            result = min(result, r - l + 1);
            sum -= a[l];
            l++;
            flag = true;
        }
        r++;
    }
    if (!flag)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << result << '\n';
    }

    return 0;
}
