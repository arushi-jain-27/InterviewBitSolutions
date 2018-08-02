TreeNode* find (TreeNode* root,int sum)
{
    if (!root)
    return NULL;
    if (root->val==sum)
    return root;
    if (sum<root->val)
    return find (root->left, sum);
    return find (root->right, sum);

}
int sol (TreeNode* curr, TreeNode* root, int sum)
{
     if (!curr)
    return 0;
    TreeNode* temp=find (root, sum-curr->val);
    if (temp && temp!=curr)
    return 1;
    return sol (curr->left, root, sum) || sol (curr->right,root, sum);
}
int Solution::t2Sum(TreeNode* root, int sum) {
    return sol (root, root, sum);

}
