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
        if (s == "abc")
            cout << "YES" << '\n';
        else if (s[0] == 'b' && s[1] == 'a' || s[0] == 'a' && s[1] == 'c' || s[0] == 'c' && s[1] == 'b')
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}