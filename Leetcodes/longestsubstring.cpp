class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s[0] == '\0')
            return 0;
        if (s[1] == '\0')
            return 1;
        int b{0}, c{0};
        for (int i = 0;; i++)
        {
            if (s[i] != '\0')
            {
                if (s[i + 1] != '\0')
                {
                    if (s[i] != s[i + 1])
                    {
                        for (int x = b; x < (i + 1); x++)
                            if (s[x] == s[i + 1])
                                b = x + 1;
                        c = std::max(c, (i + 1 - b + 1));
                    }
                    else
                    {
                        b = i + 1;
                        if (c == 0)
                            c++;
                    }
                }
            }
            else
                break;
        }
        return c;
    }
};