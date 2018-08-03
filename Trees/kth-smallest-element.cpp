/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


int Solution::kthsmallest(TreeNode* root, int k) {
    vector<int> a;
    stack<TreeNode*> s;
    TreeNode* curr=root;
    while (true)
    {
        if (curr)
        {
            s.push(curr);
            curr=curr->left;
        }
        else if (!s.empty())
        {
            TreeNode* temp=s.top();
            s.pop();
            a.push_back(temp->val);
            if (a.size()==k)
            return temp->val;
            curr=temp->right;

        }

    }


}
