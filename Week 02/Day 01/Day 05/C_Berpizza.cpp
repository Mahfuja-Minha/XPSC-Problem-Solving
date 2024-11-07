#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cusNo = 1;
    cin >> n;
    set<pair<int, int>> s;
    multiset<pair<int, int>> ml;
    vector<int> result;
    for (int i = 1; i <= n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int money;
            cin >> money;
            s.insert({cusNo, money});
            ml.insert({money, -cusNo});
            cusNo++;
        }
        else if (type == 2)
        {
            int p = s.begin()->first, money = s.begin()->second;
            result.push_back(p);
            s.erase(s.begin());
            ml.erase({money, -p});
        }
        else
        {
            int p = -ml.rbegin()->second, money = ml.rbegin()->first;
            result.push_back(p);
            ml.erase(--ml.end());
            s.erase({p, money});
        }
    }

    for (auto val : result)
    {
        cout << val << " ";
    }
    cout << '\n';

    return 0;
}