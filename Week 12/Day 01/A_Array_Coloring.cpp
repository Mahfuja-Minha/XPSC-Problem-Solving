#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
                odd++;
        }
        if (odd % 2 == 0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}