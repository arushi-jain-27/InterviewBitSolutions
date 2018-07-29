/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void find (TreeNode* root, int& sum, vector<int> &a)
{
    if (!root )
    {
        a.push_back(sum);
        return;
    }
    sum=sum*10+root->val;
    sum=sum%1003;
    if (!root->left && !root->right)
    {
        a.push_back(sum);
        return;
    }
    int sum1=sum;
    if (root->left)
    find (root->left, sum, a);
    if (root->right)
    find (root->right, sum1, a);

}
int Solution::sumNumbers(TreeNode* root) {
    vector <int> a;
    int sum=0;
    find (root, sum, a);
    sum=0;
    for (int i=0;i<a.size();i++)
    {
        sum+=a[i];
        sum%=1003;

    }
    return sum;

}
