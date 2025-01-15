// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, q;
//         cin >> n >> q;
//         vector<ll> a(n), x(q);
//         ll b;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         for (int i = 0; i < q; i++)
//         {
//             cin >> x[i];
//         }
//         for (int i = 0; i < q; i++)
//         {
//             b = pow(2, x[i]);
//             for (int j = 0; j < n; j++)
//             {
//                 if (a[j] % b == 0)
//                 {
//                     a[j] += pow(2, x[i] - 1);
//                 }
//             }
//         }
//         for (int i = 0; i < n; i++)
//         {
//             cout << a[i] << " ";
//         }
//         cout << '\n';
//     }

//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), x(q);
        ll b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> x[i];
        }
        vector<bool> vis(31, false);
        for (int i = 0; i < q; i++)
        {
            if (vis[x[i]])
            {

                continue;
            }
            vis[x[i]] = true;
            ll d = (1LL << x[i]);
            ll add = 1LL << (x[i] - 1);
            for (int j = 0; j < n; j++)
            {
                if (a[j] % d == 0)
                {
                    a[j] += add;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}