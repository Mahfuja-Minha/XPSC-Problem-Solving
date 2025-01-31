// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     ll n, x, cnt = 0;
//     cin >> n >> x;
//     ll a[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         ll sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += a[j];
//             if (sum == x)
//             {
//                 cnt++;
//             }
//         }
//     }

//     cout << cnt;
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, x, sum = 0, cnt = 0;
    cin >> n >> x;
    // ll a[n];
    map<ll, ll> mp;
    mp[sum] = 1;

    for (int i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        sum += c;
        if (mp[sum - x])
        {
            cnt++;
        }
        mp[sum] = 1;
    }
    cout << cnt;
    return 0;
}
