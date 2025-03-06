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
        if (n <= 28)
        {
            cout << "aa" << char(n - 2 + 96) << '\n';
        }
        else if (n <= 53)
        {
            cout << "a" << char(n - 27 + 96) << "z" << '\n';
        }
        else
        {
            cout << char(n - 52 + 96) << "zz" << '\n';
        }
    }

    return 0;
}
