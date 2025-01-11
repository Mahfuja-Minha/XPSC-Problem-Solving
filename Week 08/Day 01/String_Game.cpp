#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, cnt = 0, cnt1 = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt1++;
            }
            else
            {
                cnt++;
            }
        }
        int m = min(cnt, cnt1);
        if (m % 2 != 0)
        {
            cout << "Zlatan" << '\n';
        }
        else
        {
            cout << "Ramos" << '\n';
        }
    }

    return 0;
}
