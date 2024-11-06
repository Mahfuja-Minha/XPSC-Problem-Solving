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

        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);
        }

        string m = "Timur";
        sort(m.begin(), m.end());
        sort(s.begin(), s.end());
        if (m == s)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }

    return 0;
}
