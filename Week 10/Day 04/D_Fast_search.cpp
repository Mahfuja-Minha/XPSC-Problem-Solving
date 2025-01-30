#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int l, r;
        cin >> l >> r;
        int left = 0, right = n - 1, x = n;
        while (left <= right)
        {
            int mid = (right + left) / 2;
            if (a[mid] >= l)
            {
                x = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        left = 0, right = n - 1;
        int y = -1;
        while (left <= right)
        {
            int mid = (right + left) / 2;
            if (a[mid] <= r)
            {
                y = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        if (y >= x)
            cout << (y - x + 1) << " ";
        else
            cout << "0" << " ";
    }

    return 0;
}
