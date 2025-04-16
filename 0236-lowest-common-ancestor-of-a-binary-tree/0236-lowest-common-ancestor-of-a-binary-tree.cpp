/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
//agr p ya q root ke he equal nikle toh voh return
        if(root == p || root == q) return root;

//root ke left side se koi value mile toh voh lo
//root ke right side se value mile toh voh lo
        TreeNode* leftSide=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightSide=lowestCommonAncestor(root->right,p,q);
        
//agr left side aur right side dono null nhi toh root he return
        if(leftSide !=NULL && rightSide !=NULL) return root;

//agr left side null nhi toh left return,koi toh value hogi
//agr right side mei koi value hai null nahi hai toh voh return
        if(leftSide !=NULL) return leftSide;
        else return rightSide;
        
    }
};