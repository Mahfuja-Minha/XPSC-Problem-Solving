#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<string> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m.push(s);
    }
    set<string> a;
    while (!m.empty())
    {
        if (a.find(m.top()) == a.end())
        {
            a.insert(m.top());
            string p = m.top();
            cout << p.substr(p.size() - 2);
        }
        m.pop();
    }

    return 0;
}
