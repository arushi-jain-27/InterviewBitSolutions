/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* root) {


           vector<vector<int>> a;
           if (!root)
           return a;
           vector<int> b;
           stack<TreeNode*> curr, next;

           int d=0;
           TreeNode* temp=root;
           curr.push (temp);
           while (true)
           {
               if (!curr.empty())
               {
                   temp=curr.top();
                   curr.pop();
                   b.push_back(temp->val);
                   if (d==0)
                   {
                        if (temp->left)
                        next.push (temp->left);
                        if (temp->right)
                        next.push (temp->right);
                   }
                   else
                   {

                        if (temp->right)
                        next.push (temp->right);
                        if (temp->left)
                        next.push (temp->left);
                   }
               }
               if (curr.empty())
               {
                   a.push_back(b);
                   b.clear();
                   if (next.empty())
                   return a;
                   swap (curr, next);
                   d= !d;
               }

           }


}
