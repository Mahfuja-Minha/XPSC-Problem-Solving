#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 1;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        a[0]++;
        for (int i = 0; i < n; i++)
        {
            cnt *= a[i];
        }
        cout << cnt << '\n';
    }

    return 0;
}