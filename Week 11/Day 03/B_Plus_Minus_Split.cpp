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
        string s;
        cin >> s;
        int cnt = 0, cnt1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '-')
            {
                cnt1++;
            }
            else if (s[i] == '+')
            {
                cnt++;
            }
        }
        int m = abs(cnt - cnt1);
        cout << m << '\n';
    }

    return 0;
}