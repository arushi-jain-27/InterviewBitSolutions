/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* root) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    TreeNode* curr=root;
    while (curr)
    {
        if (curr->left && curr->right)
        {
            TreeNode* temp=curr->left;
            while (temp->right)
            temp=temp->right;
            temp->right=curr->right;
            curr->right = curr->left;
        }
        else if (curr->left)
        curr->right = curr->left;
        curr->left=NULL;
        curr=curr->right;

    }
    return root;


}
