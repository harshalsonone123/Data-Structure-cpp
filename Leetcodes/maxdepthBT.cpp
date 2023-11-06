#include <iostream>
using namespace std;

class Solution
{

public:
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight) + 1;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
