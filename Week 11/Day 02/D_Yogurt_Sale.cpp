#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int x = n * a;
        if (n == 2)
        {
            cout << min(x, b) << '\n';
        }
        else if (n % 2 == 0)
        {
            int c = (n / 2) * b;
            cout << min(c, x) << '\n';
        }
        else
        {
            int y = (((n - 1) / 2) * b) + a;
            cout << min(x, y) << '\n';
        }
    }

    return 0;
}
