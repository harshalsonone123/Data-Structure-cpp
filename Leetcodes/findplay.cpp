#include <iostream>
using namespace std;

class Solution
{

public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        set<int> all, l, l2;
        vector<int> a0, a1;
        for (auto &m : matches)
        {
            all.insert({m[0], m[1]});
            if (!l.insert(m[1]).second)
            {
                l2.insert(m[1]);
            }
        }
        set_difference(begin(all), end(all), begin(l), end(l), back_inserter(a0));
        set_difference(begin(all), end(l), begin(l2), end(l2), back_inserter(a1));
        return {a0, a1};
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
