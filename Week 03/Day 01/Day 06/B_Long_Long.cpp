#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        ll a[m];
        for (int i = 0; i < m; i++)
        {
            cin >> a[i];
        }
        ll s = 0, cnt = 0;
        bool n = false;
        for (int i = 0; i < m; i++)
        {
            if (a[i] < 0)
            {
                if (n == false)
                {
                    n = true;
                    cnt++;
                }
            }
            else if (a[i] > 0)
            {
                n = false;
            }
            s += abs(a[i]);
        }
        cout << s << " " << cnt << '\n';
    }

    return 0;
}
