// #include <bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ll n;
//     cin >> n;
//     vector<ll> a;
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             a.push_back(i);
//             if ((n / i) != i)
//             {
//                 a.push_back(n / i);
//             }
//         }
//     }
//     sort(a.begin(), a.end());
//     cout << a[1];
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << 1;
    }
    else if (n % 2 == 0)
    {
        cout << 2;
    }
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2;
        }
        else
        {
            cout << 3;
        }
    }

    return 0;
}