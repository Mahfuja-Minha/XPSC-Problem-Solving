#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int cnt = (y + 1) / 2;
        int ava = ((y / 2) * 7) + ((y % 2) * 11);
        int b = max(0, x - ava);
        cnt += (b + 14) / 15;

        cout << cnt << endl;
    }

    return 0;
}