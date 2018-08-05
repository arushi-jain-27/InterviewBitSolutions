/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* root, int sum) {
    if (!root)
    {

        return 0;
    }

    if (root->val==sum && !root->left && !root->right)
    return 1;
    return hasPathSum (root->left, sum-root->val) || hasPathSum (root->right, sum-root->val);

}
