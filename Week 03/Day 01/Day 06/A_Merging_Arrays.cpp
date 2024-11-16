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

    int l = 0, r = 0;
    vector<ll> result;

    while (l < n && r < m)
    {
        if (a[l] <= b[r])
        {
            result.push_back(a[l]);
            l++;
        }
        else
        {
            result.push_back(b[r]);
            r++;
        }
    }

    while (l < n)
    {
        result.push_back(a[l]);
        l++;
    }

    while (r < m)
    {
        result.push_back(b[r]);
        r++;
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     vector<ll> a(n), b(m);
//     multiset<int> ms;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//         ms.insert(a[i]);
//     }
//     for (int i = 0; i < m; i++)
//     {
//         cin >> b[i];
//         ms.insert(b[i]);
//     }
//     for (auto it : ms)
//     {
//         cout << it << " ";
//     }
//     return 0;
// }