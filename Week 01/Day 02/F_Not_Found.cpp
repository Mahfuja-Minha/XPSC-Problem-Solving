#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] == 0)
        {
            cout << char(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None";
    return 0;
}