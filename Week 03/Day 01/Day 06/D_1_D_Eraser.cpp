#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        int l = 0, cnt = 0;
        while (l < n)
        {

            if (s[l] == 'B')
            {
                cnt++;
                l += k;
            }

            else
            {
                l++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}