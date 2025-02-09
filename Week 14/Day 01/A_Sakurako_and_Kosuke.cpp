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
        if (n % 2 != 0)
        {
            cout << "Kosuke" << '\n';
        }
        else
        {
            cout << "Sakurako" << '\n';
        }
    }

    return 0;
}