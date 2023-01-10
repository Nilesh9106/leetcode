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
    bool inorder(TreeNode* p, TreeNode* q){
        if(p == NULL and q== NULL){
            
            return true;
        }else if(p == NULL or q== NULL){
            return false;
        }
        return (p->val == q->val and inorder(p->left,q->left) and inorder(p->right,q->right));
        
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return inorder(p,q);
    }
};