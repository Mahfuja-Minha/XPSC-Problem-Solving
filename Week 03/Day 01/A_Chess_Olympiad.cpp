#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    double t = x * 1 + y * 0.5;
    double o = z + y * 0.5;
    int n = 4 - (x + y + z);
    t += n;

    if (t > o)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
    }

    return 0;
}
