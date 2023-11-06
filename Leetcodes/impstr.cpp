#include <iostream>
using namespace std;

class solution
{
public:
    int StrStr(string haystack, string needle)
    {
        if (needle.length() == 0)
            return 0;

        if (needle.length() > haystack.length())
            return -1;

        if (haystack.length() == 0)
            return 0;

        for (int i = 0; i < haystack.length(); i++)
        {
            if (haystack.substr(i, needle.length()) == needle)
                return i;
        }
        return -1;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
