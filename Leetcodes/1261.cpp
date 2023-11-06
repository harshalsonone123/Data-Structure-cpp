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
class FindElements
{
public:
    vector<int> myvec;
    void check(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left)
        {
            root->left->val = 2 * root->val + 1;
            check(root->left);
        }
        if (root->right)
        {
            root->right->val = 2 * root->val + 2;
            check(root->right);
        }
        myvec.push_back(root->val);
    }
    FindElements(TreeNode *root)
    {
        root->val = 0;
        check(root);
    }

    bool find(int target)
    {
        for (int i = 0; i < myvec.size(); i++)
        {
            if (myvec[i] == target)

                return true;
        }
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */