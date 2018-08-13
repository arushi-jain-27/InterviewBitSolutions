/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool check (TreeNode* root, int sum, vector<int>& a, vector<vector<int>>& b)
{

    if (!root)
        return false;
    a.push_back (root->val);
    if (root->val==sum && !root->left && !root->right)
        {
            b.push_back (a);
            a.clear();
            return true;

        }
    if (root->val!=sum && !root->left && !root->right)
        {
            a.clear();
            return false;

        }
    vector <int> c=a;
    bool left= check (root->left, sum-root->val, a, b), right;
    if (left)
    {
        right=check (root->right, sum-root->val, c, b);
        return true;

    }
    right=check (root->right, sum-root->val, c, b);
    if (right)
    return true;
    return false;


}
vector<vector<int> > Solution::pathSum(TreeNode* root, int sum) {
    vector <int> a;
    vector <vector<int>> b;
    check (root, sum, a, b);
    return b;


}
