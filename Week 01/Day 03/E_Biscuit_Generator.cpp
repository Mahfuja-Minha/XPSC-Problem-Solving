#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b >> t;

    int d = (t + 0.5) / a;
    int biscuits = d * b;

    cout << biscuits;
    return 0;
}