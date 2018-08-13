/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* new_node (int val)
{
 TreeNode* t=(TreeNode*)malloc (sizeof(TreeNode));
 t->val=val;
 t->left=NULL;
 t->right=NULL;
 return t;
}
int search (vector<int> a, int key, int start, int end)
{
    for (int i=start;i<=end;i++)
    if (a[i]==key)
    return i;
}
TreeNode* build (vector<int> pre, vector<int> in, int start, int end, int &ind)
{
    if (start>end)
        return NULL;

    TreeNode* t=new_node (pre[ind++]);
    if (start==end)
    return t;
    int inorder=search (in, t->val, start, end);
    t->left=build (pre, in, start, inorder-1, ind);
    t->right=build (pre, in, inorder+1, end, ind);
    return t;
}
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in) {
    int ind=0;
    return build (pre, in, 0, in.size()-1, ind);
}
