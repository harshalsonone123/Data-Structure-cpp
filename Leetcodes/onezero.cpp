/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    long int ans = 0, temp = -1;
    void fun(TreeNode *root, int level)
    {
        if (!root)
            return;
        if (!root->left && !root->right)
        {
            if (level > temp)
            {
                temp = level;
                ans = root->val;
            }
            else if (level == temp)
                ans += root->val;
        }
        fun(root->left, level + 1);
        fun(root->right, level + 1);
    }
    int deepestLeavesSum(TreeNode *root)
    {
        fun(root, 0);
        return ans;
    }
};