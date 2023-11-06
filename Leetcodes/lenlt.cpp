#include <iostream>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int len = 0;
        int last = s.size() - 1;
        while (last >= 0 && s[last] == ' ')
        {
            last--;
        }
        while (last >= 0 && s[last] != ' ')
        {
            len++;
            last--;
        }
        return len;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
