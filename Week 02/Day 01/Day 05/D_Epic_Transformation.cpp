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
        map<int, int> count;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            count[x]++;
        }

        priority_queue<int> p;
        for (auto [x, y] : count)
        {
            p.push(y);
        }
        while (!p.empty())
        {
            if (p.size() < 2)
            {
                break;
            }
            int x, y;
            x = p.top();
            p.pop();
            y = p.top();
            p.pop();
            x--, y--;
            if (x >= 1)
            {
                p.push(x);
            }
            if (y >= 1)
            {
                p.push(y);
            }
        }
        int result = 0;
        while (!p.empty())
        {
            result += p.top();
            p.pop();
        }
        cout << result << '\n';
    }
    return 0;
}