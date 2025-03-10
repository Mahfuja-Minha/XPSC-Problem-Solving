#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    int odd = 0;
    for (auto [k, o] : mp)
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
    string first, middle, last;
    for (auto [k, o] : mp)
    {
        if (o % 2 != 0)
        {
            for (int i = 0; i < o; i++)
            {
                middle.push_back(k);
            }
        }
        else
        {
            for (int i = 0; i < (o / 2); i++)
            {
                first.push_back(k);
                last.push_back(k);
            }
        }
    }
    reverse(last.begin(), last.end());
    cout << first + middle + last;
    return 0;
}
