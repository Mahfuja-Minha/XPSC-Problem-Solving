#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, g = 3;
        cin >> n;
        map<string, int> f;
        vector<string> word[g];
        for (int i = 0; i < g; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                word[i].push_back(s);
                f[s]++;
            }
        }

        vector<int> sco(g + 1);
        for (int i = 0; i < g; i++)
        {
            for (string word : word[i])
            {
                if (f[word] == 1)
                {
                    sco[i] += 3;
                }
                else if (f[word] == 2)
                {
                    sco[i] += 1;
                }
            }
        }

        cout << sco[0] << " " << sco[1] << " " << sco[2] << endl;
    }
    return 0;
}
