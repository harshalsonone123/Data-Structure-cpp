#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> nodes;
        stack<TreeNode *> todo;
        while (root || !todo.empty())
        {
            while (root)
            {
                todo.push(root);
                root = root->left;
            }
            root = todo.top();
            todo.pop();
            nodes.push_back(root->val);
            root = root->right;
        }

        return nodes;
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
