#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < q; i++)
    {
        int k, l = 0, r = n - 1;
        cin >> k;
        bool ok = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (k == a[mid])
            {
                ok = true;
                break;
            }
            else if (k < a[mid])
            {
                r = mid - 1;
            }
            else if (k > a[mid])
            {
                l = mid + 1;
            }
        }
        if (ok)
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