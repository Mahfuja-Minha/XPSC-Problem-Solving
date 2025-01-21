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
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                a++;
            else if (s[i] == 'B')
                b++;
            else if (s[i] == 'C')
                c++;
            else if (s[i] == 'D')
                d++;
            else
                e++;
        }
        int sum = min(n, a) + min(n, b) + min(n, c) + min(n, d);
        cout << sum << '\n';
    }

    return 0;
}