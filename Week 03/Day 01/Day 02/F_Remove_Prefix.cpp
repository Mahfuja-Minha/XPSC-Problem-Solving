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
        set<int> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.count(v[i]) == 1)
            {
                break;
            }
            else
            {
                s.insert(v[i]);
            }
            n--;
        }
        cout << n << '\n';
    }
    return 0;
}
