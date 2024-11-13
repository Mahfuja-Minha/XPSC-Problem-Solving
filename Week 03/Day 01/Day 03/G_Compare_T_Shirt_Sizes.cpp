#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        char a1 = a.back();
        char b1 = b.back();
        if (a1 == b1)
        {
            if (a.size() == b.size())
            {
                cout << "=" << '\n';
            }
            else if (a1 == 'S')
            {
                if (a.size() > b.size())
                {
                    cout << "<" << '\n';
                }
                else
                {
                    cout << ">" << '\n';
                }
            }
            else if (a1 == 'L')
            {
                if (a.size() > b.size())
                {
                    cout << ">" << '\n';
                }
                else
                {
                    cout << "<" << '\n';
                }
            }
        }

        else if (a1 == 'M' || b1 == 'M')
        {
            if (a1 == 'M' && b1 == 'S')
            {
                cout << ">" << '\n';
            }
            else if (a1 == 'M' && b1 == 'L')
            {
                cout << "<" << '\n';
            }
            else if (a1 == 'S' && b1 == 'M')
            {
                cout << "<" << '\n';
            }
            else if (a1 == 'L' && b1 == 'M')
            {
                cout << ">" << '\n';
            }
        }

        else
        {
            if (a1 == 'S')
                cout << "<" << '\n';
            else
                cout << ">" << '\n';
        }
    }
    return 0;
}
