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
    long long max1;
    long long mod = 1e9+7;
    long long dfs(TreeNode * root,long long sum){
        
        if(root==NULL){
            return 0;
        }
        
        long long l =   dfs(root->left,sum);
        long long r =    dfs(root->right,sum);
        long long sub = l+r+root->val;
       
        long long left = sum-sub;
        long long ans = (left*sub);
        
        max1=max(max1,ans);
       return sub;
        
    }
    long long totalsum(TreeNode * root){
        if(root==NULL)return 0;
        long long l = totalsum(root->left);
        long long r = totalsum(root->right);
        return l+r+root->val;
    }
    int maxProduct(TreeNode* root) {
        long long s=totalsum(root);
        
        dfs(root,s);
        return max1%mod;
    }
};