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
        int cnt[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            int v = s[i] - 'a';
            cnt[v]++;
        }
        while (n != 0)
        {

            for (int i = 0; i < 26; i++)
            {
                if (cnt[i] != 0)
                {
                    cout << char(i + 'a') << "";
                    cnt[i]--;
                    n--;
                }
            }
        }

        cout << "\n";
    }
}
