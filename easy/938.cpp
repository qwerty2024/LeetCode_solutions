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
class Solution {
    int _low = 0;
    int _high = 0;
    int ans = 0;

    void dfs(TreeNode* root) {
        if (!root)
            return;

        if (root->val >= _low && root->val <= _high)
            ans += root->val;

        dfs(root->left);
        dfs(root->right);
    }

public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        _low = low;
        _high = high;

        dfs(root);

        return ans;
    }
};