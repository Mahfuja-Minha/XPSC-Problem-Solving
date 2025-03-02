

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0, c = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] % 3 == 1)
            {
                c = 1;
            }
        }
        if (sum % 3 == 0)
        {
            cout << "0" << '\n';
        }
        else if (sum % 3 == 2)
        {
            cout << "1" << '\n';
        }
        else if (c)
        {
            cout << "1" << '\n';
        }
        else
        {
            cout << "2" << '\n';
        }
    }
}