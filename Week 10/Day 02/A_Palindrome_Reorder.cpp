#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> cnt;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        cnt[s[i]]++;
    }

    int odd = 0;
    for (auto [k, o] : cnt)
    {
        if (o % 2 != 0)
        {
            odd++;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    string f, m, l;

    for (auto [k, o] : cnt)
    {
        if (o % 2 != 0)
        {

            for (int i = 0; i < o; i++)
            {
                m.push_back(k);
            }
        }
        else
        {

            for (int i = 0; i < (o / 2); i++)
            {
                f.push_back(k);
                l.push_back(k);
            }
        }
    }

    reverse(l.begin(), l.end());

    cout << f << m << l;

    return 0;
}
