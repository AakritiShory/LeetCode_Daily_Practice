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
    bool bst(TreeNode* root,long long min,long long max){
        if(root==NULL) return true;
        //checking for the root value
        //min ,max val for left and right that remain fixed in range coming from top
        if(root->val>min && root->val<max){
            bool left=bst(root->left,min,root->val); //recursive calls
            bool right=bst(root->right,root->val,max);
            return left && right;
        }
        //kuch ni match hua toh bs false
        return false;
    }
    bool isValidBST(TreeNode* root) {
         return bst(root,LLONG_MIN,LLONG_MAX);
        
    }
};