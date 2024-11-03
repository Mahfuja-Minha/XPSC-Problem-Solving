#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    ll x;
    cin >> n >> x;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != x)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}