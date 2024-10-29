#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll a[n];
    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        ll mn = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
                mn = min(mn, a[i]);
        }

        ll sum1 = sum - mn;
        cout << sum1;
    }

    return 0;
}