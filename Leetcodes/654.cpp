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
    TreeNode *constructMaximumBinaryTree(vector<int> &nums)
    {
        if (nums.size() == 0)
            return nullptr;
        return util(0, nums.size() - 1, nums);
    }

    TreeNode *util(int i, int j, vector<int> &nums)
    {
        int mx = 0;
        int end = i;
        if (i > j)
            return nullptr;
        for (int a = i; a <= j; a++)
        {
            /* code */
            if (nums[a] > mx)
            {
                mx = nums[a];
                end = a;
            }
        }
        TreeNode *node = new TreeNode(mx);
        node->left = util(i, end - 1, nums);
        node->right = util(end + 1, j, nums);

        return node;
    }
};