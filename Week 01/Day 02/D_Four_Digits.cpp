#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        cnt++;
    }
    if (cnt == 4)
    {
        cout << s << endl;
    }
    else
    {
        while (cnt < 4)
        {
            s = '0' + s;
            cnt++;
        }
        cout << s;
    }
    return 0;
}