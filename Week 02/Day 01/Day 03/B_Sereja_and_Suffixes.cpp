#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n + 1), cnt(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    set<int> o;
    for (int i = n; i >= 1; i--)
    {
        o.insert(a[i]);
        cnt[i] = o.size();
    }

    for (int i = 1; i <= m; i++)
    {
        int p;
        cin >> p;
        cout << cnt[p] << '\n';
    }
    return 0;
}
