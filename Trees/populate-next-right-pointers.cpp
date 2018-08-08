/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */

void Solution::connect(TreeLinkNode* root) {
        if (root == NULL) return ;
        queue<TreeLinkNode*> cur_layer;
        cur_layer.push(root);
        queue<TreeLinkNode*> next_layer;
        vector<int> layer_output;

        while (!cur_layer.empty()) {
            TreeLinkNode* node = cur_layer.front();
            cur_layer.pop();
            //layer_output.push_back(node->val);

                if (node->left != NULL) next_layer.push(node->left);
                if (node->right != NULL) next_layer.push(node->right);


            if (cur_layer.empty()) {
                node->next=NULL;
                cur_layer.swap(next_layer);

            }
            else
                node->next=cur_layer.front();
        }

}
