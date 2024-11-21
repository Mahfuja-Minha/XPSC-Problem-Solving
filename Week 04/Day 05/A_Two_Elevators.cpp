#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int e1 = abs(a - 1);
        int e2 = abs(b - c) + abs(c - 1);
        if (e1 == e2)
        {
            cout << "3" << '\n';
        }
        else if (e1 < e2)
        {
            cout << "1" << '\n';
        }
        else
        {
            cout << "2" << '\n';
        }
    }
    return 0;
}