/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
*/
bool find (TreeNode* root, int value)
{
    if (!root)
    return false;
    if (root->val==value)
    return true;
    return find (root->left, value) || find (root->right, value);
}
TreeNode* lowest (TreeNode* root, int n1, int n2)
{
    if (!root)
    return NULL;
    if (root->val==n1 || root->val==n2)
    return root;
    if (find (root->left, n1) && find (root->right, n2) || find (root->left, n2) && find (root->right, n1))
    return root;
    TreeNode* a=lowest (root->left, n1, n2);
    if (!a)
    a=lowest (root->right, n1, n2);
    return a;

}
int Solution::lca(TreeNode* root, int n1, int n2) {


    if (!root || !find (root, n1) || !find (root, n2))
    return -1;
    if (root->val==n1 || root->val==n2)
    return root->val;
    TreeNode* ans =lowest (root, n1, n2);
    return ans->val;
}
