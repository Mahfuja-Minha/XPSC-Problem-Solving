class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        int l = 0, r = 0, result = -1;
        map<char, int> cnt;
        while (r < s.size())
        {
            cnt[s[r]]++;
            if (cnt.size() == k)
            {
                result = max(result, r - l + 1);
            }
            else
            {
                while (cnt.size() > k && l <= r)
                {
                    cnt[s[l]]--;
                    if (cnt[s[l]] == 0)
                    {
                        cnt.erase(s[l]);
                    }
                    l++;
                }
            }
            r++;
        }
        return result;
    }
};