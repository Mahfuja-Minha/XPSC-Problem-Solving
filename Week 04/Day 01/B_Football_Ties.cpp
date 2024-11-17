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
        int m = x % 3;
        int n = y % 3;
        int mn = min(m, n);
        cout << mn << '\n';
    }
    return 0;
}