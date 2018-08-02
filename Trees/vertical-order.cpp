/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {

   map <int, vector<int>> m;
   vector <int> a;
   vector <vector<int>> b;
   if (!A)
   return b;
   queue <pair<int, TreeNode*>> q;
   pair <int, TreeNode*> temp;
   int hd=0;
   TreeNode* node=A;
   temp= make_pair (hd, node);
   q.push(temp);
   while (!q.empty())
   {
       temp=q.front();
       q.pop();
       hd=temp.first;
       node=temp.second;
       m[hd].push_back (node->val);
       if (node->left)
       q.push (make_pair(hd-1, node->left));
       if (node->right)
       q.push (make_pair (hd+1, node->right));

   }

   map <int, vector<int>> :: iterator it;
   for (it=m.begin(); it!=m.end();it++){
   for (int i=0;i<it->second.size();i++)
   a.push_back (it->second[i]);
   b.push_back (a);
   a.clear();
   }
   return b;



}
