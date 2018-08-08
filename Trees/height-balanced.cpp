/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int height (TreeNode* root)
{

    if (root==NULL)
        return 0;
    return max (height(root->left), height(root->right))+1;

}
int Solution::isBalanced(TreeNode* root) {
    if (!root)
        return 1;
    int left=height (root->left);
    int right=height (root->right);
    if (fabs(left-right)<=1 && isBalanced (root->left) && isBalanced (root->right))
        return 1;
        return 0;
}
