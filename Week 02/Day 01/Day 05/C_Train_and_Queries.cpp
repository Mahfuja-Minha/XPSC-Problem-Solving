#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        map<int, set<int>> o;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            o[x].insert(i);
        }
        for (int i = 1; i <= m; i++)
        {
            int p, q;
            cin >> p >> q;
            if ((o.find(p) == o.end()) || (o.find(q) == o.end()))
            {
                cout << "NO" << '\n';
            }
            else
            {
                int s, e;
                s = *o[p].begin();
                e = *o[q].rbegin();
                if (s < e)
                {
                    cout << "YES" << '\n';
                }
                else
                {
                    cout << "NO" << '\n';
                }
            }
        }
    }
    return 0;
}