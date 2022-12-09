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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root == NULL){
            return 0;
        }
        stack<TreeNode *> s;
        TreeNode *curr = root;
        bool c = false;
        int count=0;
        while (curr != NULL || s.empty() == false)
        {
            while (curr !=  NULL)
            {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            if(curr->val == low){
                c=true;
            }else if(curr->val == high){
                count+=high;
                c=false;
            }

            if(c){
                count+=curr->val;
            }
            cout << curr->val << " ";
            curr = curr->right;
    
        }
        return count;
    }
};