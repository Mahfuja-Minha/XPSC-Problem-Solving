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
        int b1 = 0, b2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                b1 = i;
                break;
            }
        }
        for (int i = n - 1; i > 0; i--)
        {
            if (s[i] == 'B')
            {
                b2 = i;
                break;
            }
        }
        int result = (b2 - b1) + 1;
        cout << result << '\n';
    }

    return 0;
}