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
        int cnt = 0;
        for (int i = 0; i < n - 2; i++)
        {
            string t = s.substr(i, 3);
            if (t == "map" || t == "pie")
            {
                i += 2;
                cnt++;
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
