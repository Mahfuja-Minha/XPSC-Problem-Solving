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
        int n, m, cnt = 0;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            for (j = j; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    cnt++;
                    j++;
                    break;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}