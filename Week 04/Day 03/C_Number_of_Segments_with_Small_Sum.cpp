#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll l = 0, r = 0, sum = 0, cnt = 0;
    while (r < n)
    {
        sum += v[r];
        if (sum <= k)
        {
            cnt += (r - l + 1);
        }
        else
        {
            while (sum > k && l <= r)
            {
                sum -= v[l];
                l++;
            }
            if (sum <= k)
            {
                cnt += (r - l + 1);
            }
        }
        r++;
    }
    cout << cnt << '\n';
    return 0;
}