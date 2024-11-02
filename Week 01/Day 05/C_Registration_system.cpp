#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, int> mp;
    while (n--)
    {

        string s;
        cin >> s;
        if (mp.find(s) != mp.end())
        {
            cout << s << mp[s] << '\n';
            mp[s]++;
        }
        else
        {
            cout << "OK" << '\n';
            mp[s] = 1;
        }
    }
    return 0;
}
