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
TreeNode* build (vector<int> in, vector<int> pre, int start, int end, int &ind)
{
    if (start>end)
        return NULL;

    TreeNode* t=new_node (pre[ind--]);
    if (start==end)
    return t;
    int inorder=search (in, t->val, start, end);
    t->right=build (in, pre, inorder+1, end, ind);
    t->left=build (in, pre, start, inorder-1, ind);

    return t;
}
TreeNode* Solution::buildTree(vector<int> &post, vector<int> &in) {
    int ind=post.size()-1;
    return build (post, in , 0, in.size()-1, ind);
}
