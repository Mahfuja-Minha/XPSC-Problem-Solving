
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<int> a(n);
//     vector<long long> f(n + 1, 0);
//     long long mx = 0;

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         f[a[i]]++;
//         mx = max(mx, f[a[i]]);
//     }

//     cout << mx;

//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<ll, ll> f;
    long long mx = 0;

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        f[a]++;
        mx = max(mx, f[a]);
    }

    cout << mx;

    return 0;
}