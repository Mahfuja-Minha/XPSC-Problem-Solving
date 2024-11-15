class Solution
{
public:
    vector<int> FirstNegativeInteger(vector<int> &arr, int k)
    {
        int l = 0, r = 0;
        vector<int> result;
        deque<int> dq;

        while (r < arr.size())
        {
            if (arr[r] < 0)
            {
                dq.push_back(arr[r]);
            }
            if (r - l + 1 == k)
            {
                if (!dq.empty())
                {
                    result.push_back(dq.front());
                    if (arr[l] == dq.front())
                    {
                        dq.pop_front();
                    }
                }
                else
                {
                    result.push_back(0);
                }
                l++, r++;
            }
            else
            {
                r++;
            }
        }
        return result;
    }
};