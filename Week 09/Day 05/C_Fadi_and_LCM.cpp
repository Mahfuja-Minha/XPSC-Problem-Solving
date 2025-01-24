#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x, a = 0;
    cin >> x;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            if ((i / __gcd(i, x / i)) * (x / i) == x)
            {
                a = i;
            }
        }
    }
    cout << a << " " << x / a;
    return 0;
}