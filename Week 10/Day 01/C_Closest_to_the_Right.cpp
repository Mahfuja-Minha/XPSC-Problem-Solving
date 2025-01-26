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
        int m = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (k <= a[mid])
            {
                m = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << m + 1 << '\n';
    }
    return 0;
}