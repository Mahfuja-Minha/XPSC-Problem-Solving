
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    map<string, string> ans, has;
    for (int i = 0; i < q; i++)
    {
        string o, n;
        cin >> o >> n;
        if (has.find(o) != has.end())
        {
            string s = has[o];
            ans[s] = n;
            has.erase(o);
            has[n] = s;
        }
        else
        {
            ans[o] = n;
            has[n] = o;
        }
    }

    cout << ans.size() << '\n';

    for (auto it : ans)
    {
        cout << it.first << " " << it.second << '\n';
    }

    return 0;
}
