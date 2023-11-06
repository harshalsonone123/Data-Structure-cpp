#include <bits/stdc++.h>
using namespace std;

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
    TreeNode *clone(TreeNode *root)
    {
        if (!root)
            return NULL;
        TreeNode *new_root = new TreeNode(root->val);
        new_root->left = clone(root->left);
        new_root->right = clone(root->right);
        return new_root;
    }
    vector<TreeNode *> allPossibleFBT(int n)
    {
        if (n % 2 == 0)
            return {};
        if (n == 1)
            return {new TreeNode(0)};
        vector<TreeNode *> res;
        for (int i = 1; i <= n - 2; i++)
        {
            /* code */
            vector<TreeNode *> l = allPossibleFBT(i);
            vector<TreeNode *> r = allPossibleFBT(n - 1 - i);
            for (int j = 0; j < l.size(); j++)
            {
                /* code */
                for (int k = 0; k < r.size(); k++)
                {
                    /* code */
                    TreeNode *root = new TreeNode(0);
                    root->left = clone(l[j]);
                    root->right = clone(r[k]);
                    res.push_back(root);
                }
            }
        }
        return res;
    }
};