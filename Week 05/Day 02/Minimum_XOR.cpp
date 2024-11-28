#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, XOR = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            XOR ^= a[i];
        }
        int result = XOR;
        for (int i = 0; i < n; i++)
        {
            int cXOR = (XOR ^ a[i]);
            result = min(result, cXOR);
        }
        cout << result << '\n';
    }
    return 0;
}