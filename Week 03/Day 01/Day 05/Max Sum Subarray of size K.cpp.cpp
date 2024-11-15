class Solution
{
public:
    long long maximumSumSubarray(vector<int> &arr, int k)
    {
        int l = 0, r = 0;
        long long result = 0, sum = 0;
        while (r < arr.size())
        {
            sum += arr[r];
            if (r - l + 1 == k)
            {
                result = max(result, sum);
                sum -= arr[l];
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