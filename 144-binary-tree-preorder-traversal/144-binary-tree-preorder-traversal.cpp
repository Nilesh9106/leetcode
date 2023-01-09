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
    void preorder(TreeNode* root,vector<int> &ans){
        if(root == NULL){
            return ;
        }
        ans.push_back(root->val);    
        
        if(root->left !=NULL){
            preorder(root->left,ans);
        }
        if(root->right !=NULL){
            preorder(root->right,ans);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preorder(root,ans);
        return ans;
    }
};