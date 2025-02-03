#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(101, 0);
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[x]++;
        }
        for (int i = 1; i <= 100; i++)
        {
            cnt += a[i] / 3;
        }
        cout << cnt << '\n';
    }

    return 0;
}