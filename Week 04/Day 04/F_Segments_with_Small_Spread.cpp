#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = 0, cnt = 0;
    multiset<ll> ms;
    while (r < n)
    {
        ms.insert(a[r]);
        ll mn = *ms.begin(), mx = *ms.rbegin();
        if (mx - mn <= k)
        {
            cnt += (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                mn = *ms.begin(), mx = *ms.rbegin();
                if (mx - mn <= k)
                {
                    break;
                }
                ms.erase(ms.find(a[l]));
                l++;
            }
            mn = *ms.begin(), mx = *ms.rbegin();
            if (mx - mn <= k)
            {
                cnt += (r - l + 1);
            }
        }
        r++;
    }
    cout << cnt;
    return 0;
}