#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> get_pi(const string& str)
    {
        vector pi(str.size(), 0);
        int left = 0;
        int right = 1;

        bool backtrace = false;
        while (right < str.size())
        {
            if (str[left] == str[right])
            {
                pi[right] = pi[right - 1] + 1;
                left++;
                right++;
            }
            else
            {
                if (left > 1)
                {
                    right -= pi[left - 1];
                    left = pi[left - 1];
                }
            }
        }

        return pi;
    }

    // issip#mississippi
    // .......1234234500
    // non-interactive method
    int strStr(string haystack, string needle)
    {
        string full = needle + "#" + haystack;
        vector<int> pi = get_pi(full);

        for (int i = needle.size() + 1; i < full.size(); i++)
        {
            if (pi[i] == needle.size())
                return i - needle.size() * 2;
        }

        return -1;
    }
};
