
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
        while (n > 0)
        {
            cnt += (n % 2);
            n = n / 2;
        }
        if (cnt % 2 == 0)
        {
            cout << "EVEN" << '\n';
        }
        else
        {
            cout << "ODD" << '\n';
        }
    }

    return 0;
}