
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
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        int s = sum / n;

        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < s)
            {
                ok = false;
                break;
            }
            a[i + 1] += (a[i] - s);
            a[i] = s;
        }

        if (ok)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
