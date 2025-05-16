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
    bool inorder(TreeNode* root,int sum,int& targetSum){
        if(root==NULL) return false;
        //sum ke ander root ki value sbse pehle store
        sum+=root->val;
        //leaf node ka check
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum) return true;
            return false;
        }
        bool leftchild=inorder(root->left,sum,targetSum);
        bool rightchild=inorder(root->right,sum,targetSum);
        //dono me se koi side path exist
        return leftchild || rightchild;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        int sum=0;
        bool ans=inorder(root,sum,targetSum);
        return ans;
        
    }
};