#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        if ((n % 2 == 0) && (m % 2 == 1) || (m < n))
        {
            cout << "NO" << '\n';
        }
        else if ((n % 2) == 1)
        {
            cout << "YES" << '\n';
            for (int i = 1; i < n; i++)
            {
                cout << "1 ";
            }
            cout << m - n + 1 << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            for (int i = 2; i < n; i++)
            {
                cout << "1 ";
            }
            cout << (m - n + 2) / 2 << " " << (m - n + 2) / 2 << '\n';
        }
    }

    return 0;
}