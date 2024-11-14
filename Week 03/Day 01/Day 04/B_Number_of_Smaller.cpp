// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;

// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<ll> a(n), b(m);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         int cnt = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (a[j] < b[i])
//                 cnt++;
//         }
//         cout << cnt << " ";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0, c = 0;
    while (l < m)
    {
        if (a[r] < b[l])
        {
            c++, r++;
        }
        else
        {
            cout << c << " ";
            l++;
        }
    }
    return 0;
}
