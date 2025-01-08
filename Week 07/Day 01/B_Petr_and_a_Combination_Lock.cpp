#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool flag = false;
    for (int m = 0; m < (1 << n); m++)
    {
        int s = 0;
        for (int k = 0; k < n; k++)
        {
            if ((m >> k) & 1)
            {
                s += a[k];
            }
            else
            {
                s -= a[k];
            }
        }
        if (s % 360 == 0)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }

    return 0;
}