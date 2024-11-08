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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }

        int mn = *s.begin();
        int mx = *s.rbegin();
        int l = 0, r = n - 1;
        bool flag = false;

        while (l < r)
        {
            if (v[l] == mn)
            {
                s.erase(v[l]);
                l++;
                mn++;
            }
            else if (v[l] == mx)
            {
                s.erase(v[l]);
                l++;
                mx--;
            }
            else if (v[r] == mx)
            {
                s.erase(v[r]);
                r--;
                mx--;
            }
            else if (v[r] == mn)
            {
                s.erase(v[r]);
                r--;

                mn++;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << l + 1 << " " << r + 1 << '\n';
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}