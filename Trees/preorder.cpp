/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* a) {

    vector <int> b;
    stack <TreeNode*> s;
    TreeNode* curr=a;
    while (true)
    {
        if (curr)
        {
            b.push_back (curr->val);
            s.push(curr);
            curr=curr->left;
        }
        else if (!s.empty())
        {
            curr=s.top()->right;
            s.pop();
        }
        else
        return b;
    }
}
