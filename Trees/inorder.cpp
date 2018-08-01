/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* a) {
    stack<TreeNode*> s;
    vector<int> b;
    TreeNode* curr =a;
    int done=0;
    while (!done)
    {
        if (curr)
        {
            s.push(curr);
            curr=curr->left;
        }
        else if (!s.empty())
        {
            b.push_back (s.top()->val);
            curr=s.top()->right;
            s.pop();
        }
        else
        done=1;
    }
    return b;
}
