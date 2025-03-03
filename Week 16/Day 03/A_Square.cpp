#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        set<int> xVal, yVal;
        for (int i = 0; i < 4; i++)
        {
            int x, y;
            cin >> x >> y;
            xVal.insert(x);
            yVal.insert(y);
        }
        int x1 = *xVal.rbegin() - *xVal.begin();
        int y1 = *yVal.rbegin() - *yVal.begin();
        int ans = x1 * y1;
        cout << ans << '\n';
    }

    return 0;
}