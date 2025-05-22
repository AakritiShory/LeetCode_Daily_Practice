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
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int l=height(root->left);
        int r=height(root->right);
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true;
        int ll=height(root->left);
        int rr=height(root->right);
        bool diff=abs(ll-rr)<=1;

        if(diff&& isBalanced(root->left)&& isBalanced(root->right)){
            return true;
        }
        return false;
    }
};