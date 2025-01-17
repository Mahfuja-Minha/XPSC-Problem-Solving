#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int zero = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                one++;
            }
            if (a[i] == 0)
            {
                zero++;
            }
        }
        if (one == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            cout << (1ll << zero) * one << '\n';
        }
    }

    return 0;
}