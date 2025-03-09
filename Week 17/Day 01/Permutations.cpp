// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a;
//     vector<int> b;
//     if (n == 1)
//     {
//         cout << "1";
//     }
//     else if (n == 2 || n == 3)
//     {
//         cout << "NO SOLUTION";
//     }
//     else
//     {
//         for (int i = 1; i <= n; i++)
//             if (i % 2 == 0)
//             {
//                 a.push_back(i);
//             }
//             else
//             {
//                 b.push_back(i);
//             }
//     }
//     for (int i = 0; i < b.size(); i++)
//     {
//         a.push_back(b[i]);
//     }
//     for (int i = 0; i < a.size(); i++)
//     {
//         cout << a[i] << " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << "1";
    }
    else if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        // প্রথমে জোড় সংখ্যা প্রিন্ট করা
        for (int i = 2; i <= n; i += 2)
        {
            cout << i << " ";
        }
        // এরপর বিজোড় সংখ্যা প্রিন্ট করা
        for (int i = 1; i <= n; i += 2)
        {
            cout << i << " ";
        }
    }
    return 0;
}
