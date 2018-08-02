/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* root) {

   if (!root)
   return NULL;
   if (root->left && root->right)
   swap (root->left, root->right);
   root->left = invertTree (root->left);
   root->right = invertTree (root->right);
   return root;
}
