/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int isEqual (TreeNode* left, TreeNode* right)
{
    if (!left && !right)
        return 1;
    if (!left || !right)
        return 0;
    if (left->val==right->val && isEqual (left->left, right->right) && isEqual (left->right, right->left))
        return 1;
    return 0;
}
int Solution::isSymmetric(TreeNode* root) {
    if (!root)
        return 1;
    return isEqual (root->left, root->right);
}
