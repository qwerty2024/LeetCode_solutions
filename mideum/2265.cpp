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
private:
    int ans = 0;

    pair<int, int> dfs(TreeNode* root) {
        pair<int, int> for_left = {0, 0};
        pair<int, int> for_right = {0 ,0};

        if (root->left)
            for_left = dfs(root->left);

        if (root->right)
            for_right = dfs(root->right);

        if ((for_left.first + for_right.first + root->val) / (for_left.second + for_right.second + 1) == root->val)
            ans++;

        return {for_left.first + for_right.first + root->val, for_left.second + for_right.second + 1};
    }

public:
    int averageOfSubtree(TreeNode* root) {
        dfs(root);

        return ans;
    }
};