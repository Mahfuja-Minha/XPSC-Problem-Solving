#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                cnt0++;
            else
                cnt1++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (cnt1)
                {
                    cnt1--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if (cnt0)
                {
                    cnt0--;
                }
                else
                {
                    break;
                }
            }
        }
        int cost = cnt1 + cnt0;
        cout << cost << '\n';
    }

    return 0;
}
