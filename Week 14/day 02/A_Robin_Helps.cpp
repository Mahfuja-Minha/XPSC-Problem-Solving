#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int sum = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                sum += a[i];
            }
            else if (a[i] == 0)
            {
                if (sum != 0)
                {
                    sum -= 1;
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}
