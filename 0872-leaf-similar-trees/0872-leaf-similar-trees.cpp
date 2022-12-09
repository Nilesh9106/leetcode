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
void dfs(TreeNode * root,vector<int> &v){
            if(root == NULL){
                return;
            }

            if(root->right == NULL && root->left == NULL){
                v.push_back(root->val);
                return;
            }
            if(root->left != NULL){
                dfs(root->left,v);
            }
            if(root->right != NULL){
                dfs(root->right,v);
            }
            
        }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> leaf1,leaf2;
        dfs(root1,leaf1);
        dfs(root2,leaf2);

        int i=0;
        if(leaf1.size() != leaf2.size()){
            return false;
        }
        
        while(i!= leaf1.size()){
            if(leaf1[i] != leaf2[i]){
                return false;
            }
            i++;
        }
        return true;
    }
};