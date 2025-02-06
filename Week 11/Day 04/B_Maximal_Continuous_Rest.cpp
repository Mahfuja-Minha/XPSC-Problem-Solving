#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int o = 0;
    int cnt = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (a[i % n] == 1)
        {
            cnt++;
            o = max(o, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    cout << o << endl;

    return 0;
}
