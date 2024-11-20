#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        long long m = (a * n) + (b * 1);
        if (m >= s && s % n <= b)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}