/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* make (const vector<int> &a, int start, int end)
{

    if (start>end)
    return NULL;
   int mid=(start+end)/2;
   TreeNode* root= (TreeNode*)malloc(sizeof(TreeNode));
   root->val=a[mid];
   root->left=make (a, start, mid-1);
   root->right=make (a, mid+1, end);
   return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &a) {
   return make (a, 0, a.size()-1);
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
