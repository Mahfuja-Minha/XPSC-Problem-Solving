
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    set<int> s;
    int i = 0, j = 0;
    while (i < n && j < n)
    {
        while (j < n && !s.count(a[j]))
        {
            s.insert(a[j]);
            ans = max(ans, j - i + 1);
            j++;
        }
        while (j < n && s.count(a[j]))
        {
            s.erase(a[i]);
            i++;
        }
    }
    cout << ans << '\n';

    return 0;
}