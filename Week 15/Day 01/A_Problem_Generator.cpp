
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, sum = 0;
        cin >> n >> m;
        string s;
        cin >> s;
        int cnt[7] = {0};
        for (int i = 0; i < n; i++)
        {
            cnt[s[i] - 65]++;
        }
        for (int i = 0; i < 7; i++)
        {
            if (cnt[i] < m)
            {
                sum += (m - cnt[i]);
            }
        }
        cout << sum << '\n';
    }

    return 0;
}
