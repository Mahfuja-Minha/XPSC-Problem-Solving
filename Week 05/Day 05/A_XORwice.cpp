#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll x = (a & b);
        ll Xor = (a ^ x) + (b ^ x);
        cout << Xor << '\n';
    }
    return 0;
}