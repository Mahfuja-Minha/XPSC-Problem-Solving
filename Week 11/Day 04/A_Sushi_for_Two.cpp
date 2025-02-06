
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 1, m = 0;
    cin >> n;
    vector<int> a(n), grp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cnt++;
        }
        else
        {
            grp.push_back(cnt);
            cnt = 1;
        }
    }
    grp.push_back(cnt);
    for (int i = 0; i < grp.size() - 1; i++)
    {
        int s = 2 * (min(grp[i], grp[i + 1]));
        m = max(m, s);
    }
    cout << m;
    return 0;
}