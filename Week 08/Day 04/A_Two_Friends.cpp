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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i]--;
        }

        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (a[a[i]] == i)
            {
                cout << 2 << '\n';
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << 3 << '\n';
        }
    }

    return 0;
}