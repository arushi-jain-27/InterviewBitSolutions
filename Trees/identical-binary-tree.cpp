/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* root1, TreeNode* root2) {
    if (!root1 && !root2)
    return 1;
    if (!root1 || !root2)
    return 0;
    if (root1->val==root2->val && isSameTree (root1->left, root2->left) && isSameTree (root1->right, root2->right))
    return 1;
    return 0;

}
