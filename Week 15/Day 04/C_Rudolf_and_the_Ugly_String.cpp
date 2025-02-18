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
        string s;
        cin >> s;

        int cnt = 0;
        while (true)
        {
            bool found = false;

            // "pie" খোঁজা
            for (int i = 0; i <= n - 3; i++)
            {
                if (s.substr(i, 3) == "pie")
                {
                    s.erase(i, 3);
                    cnt++;
                    found = true;
                    break;
                }
            }

            // "map" খোঁজা
            for (int i = 0; i <= n - 3; i++)
            {
                if (s.substr(i, 3) == "map")
                {
                    s.erase(i, 3);
                    cnt++;
                    found = true;
                    break;
                }
            }

            // যদি কোনটাই না পাওয়া যায়, লুপ থামাও
            if (!found)
            {
                break;
            }
        }

        cout << cnt << '\n'; // মুছে দেওয়া ক্যারেক্টারের সংখ্যা
    }
    return 0;
}
