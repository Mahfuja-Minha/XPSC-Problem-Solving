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
//     int cnt = 0;
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (b[i] == a[j])
//                 cnt++;
//         }
//     }
//     cout << cnt << " ";
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
    ll l = 0, r = 0, result = 0;
    while (l < m && r < n)
    {
        int c = a[r], count = 0, count1 = 0;
        while (r < n && a[r] == c)
        {
            count++, r++;
        }
        while (l < m && c > b[l])
        {
            l++;
        }
        while (l < m && b[l] == c)
        {
            count1++;
            l++;
        }
        result += (1LL * count * count1);
    }
    cout << result << " ";
    return 0;
}

