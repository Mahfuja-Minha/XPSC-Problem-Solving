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
        int cnt = 0;
        int m = n / 4;
        if (n % 4 == 0)
        {
            cout << m << '\n';
        }
        else
        {
            cout << m + 1 << '\n';
        }
    }

    return 0;
}
