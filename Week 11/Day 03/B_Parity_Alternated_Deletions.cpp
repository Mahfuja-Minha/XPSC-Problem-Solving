// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n), e, o;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             e.push_back(a[i]);
//         }
//         else if (a[i] % 2 != 0)
//         {
//             o.push_back(a[i]);
//         }
//     }
//     if (e.size() == o.size())
//     {
//         cout << 0;
//     }
//     else if (e.size() == o.size() - 1)
//     {
//         cout << 0;
//     }
//     return 0;
// }
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     int sum = 0;
//     vector<int> even, odd;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         sum += x;
//         if (x % 2 == 0)
//             even.push_back(x);
//         else
//             odd.push_back(x);
//     }

//     // sort(odd.rbegin(), odd.rend());
//     // sort(even.rbegin(), even.rend());

//     int k = min(odd.size(), even.size());
//     // int rem = sum;

//     // First k ta odd remove
//     for (int i = 0; i < k; i++)
//     {
//         sum -= odd[i];
//     }

//     // First k ta even remove
//     for (int i = 0; i < k; i++)
//     {
//         sum -= even[i];
//     }

// if (odd.size() > k)
// {
//     sum -= odd[k];
// }
// if (even.size() > k)
// {
//     sum -= even[k];
// }

//     cout << sum << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> a(n), e, o;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e.push_back(a[i]);
        }
        else
        {
            o.push_back(a[i]);
        }
    }
    if (e.size() == o.size())
    {
        cout << 0;
        return 0;
    }
    int x = min(e.size(), o.size());
    for (int i = 0; i < x; i++)
    {
        sum -= e[i];
    }
    for (int i = 0; i < x; i++)
    {
        sum -= o[i];
    }
    if (o.size() > x)
    {
        sum -= o[x];
    }
    if (e.size() > x)
    {
        sum -= e[x];
    }

    cout << sum << endl;
    return 0;
}