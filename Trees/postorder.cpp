/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* a) {
    stack <TreeNode*> s;
    vector <int> b;
    TreeNode* curr=a;
    int done=0;
    stack <int> both;
   // both.push(0);
    while (!done)
    {
        if (curr)
        {
            s.push(curr);
            curr=curr->left;
            both.push(0);
        }
        else if (!s.empty())
            if (!both.top())
            {
                curr=s.top()->right;
               both.top()=1;
            }
            else
            {
                while (!s.empty() && both.top())
               {
                   b.push_back(s.top()->val);
                    s.pop();

                     both.pop();
               }
               if (s.empty())
                break;
                curr=s.top()->right;
                both.top()=1;
            }
        else
            done=1;
    }
    return b;
}
