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

        int begin, end;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                begin = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                end = i;
                break;
            }
        }
        int ans = (end - begin) + 1;
        cout << ans << '\n';
    }
    return 0;
}
