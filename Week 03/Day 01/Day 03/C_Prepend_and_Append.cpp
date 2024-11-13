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
        string bi;
        cin >> bi;
        int l = 0, r = n - 1, result = n;
        while (l <= r)
        {
            if (bi[l] == bi[r])
            {
                break;
            }
            else
            {
                result -= 2;
                l++;
                r--;
            }
        }
        cout << result << '\n';
    }
    return 0;
}