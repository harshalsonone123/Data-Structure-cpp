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
    void create_arr(TreeNode *root, vector<int> sv)
    {

        if (root == nullptr)
            return ;
        create_arr(root->left, sv);
        sv.push_back(root->val);
        create_arr(root->right, sv);
    }

    vector<int> getAllElements(TreeNode *root1, TreeNode *root2)
    {
        vector<int> tree1;
        vector<int> tree2;

        create_arr(root1, tree1);
        create_arr(root2, tree2);
        vector<int> dst;
        merge(tree1.begin(), tree1.end(), tree2.begin(), tree2.end(), back_inserter(dst));
        return dst;
    }
};