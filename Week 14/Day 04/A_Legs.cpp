// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int cnt = 0;
//         int m = n / 4;
//         if (n % 4 == 0)
//         {
//             cout << m << '\n';
//         }
//         else
//         {
//             cout << m + 1 << '\n';
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        cout << (n + 2) / 4 << "\n";
    }
}