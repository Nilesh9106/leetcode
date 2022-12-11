/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxsum = INT_MIN;
    int dfs(TreeNode * root){
        if(root==NULL){
            return 0;
        }
        // if(root->left == NULL and root->right == NULL){
        //     return 
        // }
        int left = max(dfs(root->left),0);
        int right = max(dfs(root->right),0);
        
        maxsum = max(maxsum,root->val+left+right);
        
        return max(left+root->val,root->val+right);
       
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxsum;
    }
};