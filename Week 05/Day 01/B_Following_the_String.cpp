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
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        vector<int> cnt(n + 1, 0);
        string m = "";

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (cnt[j] == a[i])
                {
                    cnt[j]++;
                    m += char(97 + j);
                    break;
                }
            }
        }

        cout << m << endl;
    }
    return 0;
}