// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string s;
//         cin >> s;
//         vector<int> f(2, 0);
//         for (int i = 0; i < s.size(); i++)
//         {
//             f[s[i] - 'A']++;
//         }
//         if (f[0] > f[1])
//         {
//             cout << "A" << '\n';
//         }
//         else
//         {
//             cout << "B" << '\n';
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = 0, b = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                a++;
            else
                b++;
        }

        if (a > b)
        {
            cout << "A" << '\n';
        }
        else
        {
            cout << "B" << '\n';
        }
    }

    return 0;
}