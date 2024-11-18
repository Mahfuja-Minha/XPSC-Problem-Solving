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
    ll l = 0, r = 0, sum = 0, result = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum <= s)
        {
            result = max(result, r - l + 1);
        }
        else
        {
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << result << '\n';
    return 0;
}