class Solution {
public:
    int fun(TreeNode* node, int mx, int mn){
        return node ? max(fun(node->left, max(node->val, mx), min(node->val, mn)),fun(node->right, max(node->val, mx), min(node->val, mn))): mx-mn;
    }
    int maxAncestorDiff(TreeNode* root) {
        return fun(root,0,INT_MAX);
        
    }
};