#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int m = a + (a - 1);
    int o = b + (b - 1);
    int n = a + b;
    int x = max({m, o, n});
    cout << x;
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     int x;
//     if (a > b)
//     {
//         x = a + (a - 1);
//     }
//     else if (b > a)
//     {
//         x = b + (b - 1);
//     }
//     else
//     {
//         x = a + b;
//     }
//     cout << x;
//     return 0;
// }