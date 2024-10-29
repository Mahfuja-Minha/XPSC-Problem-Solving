#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    int ans = 0, ans1 = 0, w = 1;
    while (!d.empty())
    {
        int left = d.front(), right = d.back();
        int mx = max(left, right);
        if (w % 2 != 0)
        {
            ans += mx;
        }
        else
        {
            ans1 += mx;
        }
        if (mx == left)
        {
            d.pop_front();
        }
        else
        {
            d.pop_back();
        }
        w++;
    }
    cout << ans << " " << ans1 << '\n';
    return 0;
}