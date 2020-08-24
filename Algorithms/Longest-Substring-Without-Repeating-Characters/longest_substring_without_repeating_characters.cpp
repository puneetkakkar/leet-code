#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mp;
        int maxLen = 0, j = 0;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (mp.find(s[i]) != mp.end())
            {
                j = mp[s[i]];
            }

            mp[s[i]] = i + 1;
            int diff = i - j + 1;
            maxLen = max(maxLen, diff);
        }

        return maxLen;
    }
};

int main()
{

    string s = " ";
    Solution sol = Solution();
    int len = sol.lengthOfLongestSubstring(s);
    cout << len << endl;

    return 0;
}