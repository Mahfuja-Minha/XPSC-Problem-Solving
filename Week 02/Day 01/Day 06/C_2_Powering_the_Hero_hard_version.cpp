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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long result = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {

            if (v[i] == 0)
            {
                if (!pq.empty())
                {
                    int x = pq.top();
                    result += x;
                    pq.pop();
                }
            }
            else
            {
                pq.push(v[i]);
            }
        }
        cout << result << '\n';
    }
    return 0;
}
