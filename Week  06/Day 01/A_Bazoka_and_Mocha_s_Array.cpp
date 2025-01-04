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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(a);
        sort(b.begin(), b.end());
        if (a == b)
        {
            cout << "YES" << '\n';
            continue;
        }
        int bre = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                bre++;
            }
        }
        if (a[n - 1] > a[0])
        {
            bre++;
        }

        if (bre <= 1)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
