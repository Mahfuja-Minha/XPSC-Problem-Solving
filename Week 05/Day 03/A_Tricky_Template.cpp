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
        string a, b, c;
        cin >> a >> b >> c;
        bool flag = false;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                flag = true;
            }
        }
        if (flag)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }

    return 0;
}