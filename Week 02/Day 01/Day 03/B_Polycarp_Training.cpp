#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multiset<int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        m.insert(x);
    }
    int result = 0, pro = 1;
    while (!m.empty())
    {
        auto l = m.lower_bound(pro);
        if (l != m.end())
        {
            result++;
            m.erase(l);
        }
        else
        {
            break;
        }
        pro++;
    }

    cout << result << '\n';
    return 0;
}