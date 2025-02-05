#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> a(n), e, o;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e.push_back(a[i]);
        }
        else
        {
            o.push_back(a[i]);
        }
    }
    if (e.size() == o.size())
    {
        cout << 0;
        return 0;
    }
    int x = min(e.size(), o.size());
    for (int i = 0; i < x; i++)
    {
        sum -= e[i];
    }
    for (int i = 0; i < x; i++)
    {
        sum -= o[i];
    }
    if (o.size() > x)
    {
        sum -= o[x];
    }
    if (e.size() > x)
    {
        sum -= e[x];
    }

    cout << sum << endl;
    return 0;
}
