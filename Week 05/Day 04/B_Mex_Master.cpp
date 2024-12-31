#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, c1 = 0, c2 = 0, i;
        map<int, int> m;
        cin >> n;

        for (i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x > 0)
            {
                c1++;
            }
            else
            {
                c2++;
            }
            if (x == 1)
            {
                m[1]++;
            }
        }

        if ((c1 + 1) >= c2)
        {
            cout << 0 << endl;
        }
        else
        {
            if (m[1] == 0)
            {
                cout << 1 << endl;
            }
            else if (m[1] == c1)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}