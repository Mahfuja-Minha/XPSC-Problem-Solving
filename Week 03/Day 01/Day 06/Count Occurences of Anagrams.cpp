class Solution
{
public:
    int search(string pat, string txt)
    {
        // code here
        int l = 0, r = 0, cnt = 0;
        vector<int> a(26, 0);
        vector<int> fre(26);

        for (int i = 0; i < pat.length(); i++)
        {
            int val = pat[i] - 'a';
            a[val]++;
        }
        while (l < txt.length())
        {
            if (r - l + 1 == pat.length())
            {
                int v = txt[l] - 'a';
                fre[v]++;
                if (a == fre)
                {
                    cnt++;
                }
                l++, r++;
                fre[v]--;
            }
            else
            {
                int v = txt[r] - 'a';
                fre[v]++;
                r++;
            }
        }
        return cnt;
    }
};