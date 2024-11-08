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
//         deque<int> dq(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> dq[i];
//         }
//         int a = 0;
//         for (int i = 0; i < n; i++)
//         {

//             if (dq[i] == 0)
//             {

//                 int x = dq.back();
//                 a += x;
//                 dq.pop_back();
//             }
//             else
//             {
//                 if (dq[i] > dq.back())
//                 {
//                     dq.push_back(dq[i]);
//                 }
//                 else
//                 {
//                     dq.push_front(dq[i]);
//                 }
//             }
//         }
//         cout << a << '\n';
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
        int n;
        cin >> n;
        deque<int> dq(n);

        for (int i = 0; i < n; i++)
        {
            cin >> dq[i];
        }

        long long a = 0;
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {

            if (dq[i] == 0)
            {
                if (!pq.empty())
                {
                    int x = pq.top();
                    a += x;
                    pq.pop();
                }
            }
            else
            {
                pq.push(dq[i]);
            }
        }
        cout << a << '\n';
    }
    return 0;
}
