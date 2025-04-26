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
    TreeNode* searchBST(TreeNode* root, int val) {
    //     //agr root he null hai toh false value return
    //     if(root==NULL) return NULL;

    //     //agr root he target ke equal
    //     if(root->val==val) return root;

    //     //value choti root se toh left part search
    //     if(root->val>val){
    //         return searchBST(root->left,val);
    //     }else{
    //         //value hai root se badi toh right part search
    //         return searchBST(root->right,val);
    //     }
       
       //iterative way
       //ek nayi node bana lo
       TreeNode* temp=root;
       while(temp!=NULL){
        if(temp->val==val){
            return temp; //node return krni hai
        }
        if(temp->val>val){
            temp=temp->left;
        }else{
            temp=temp->right;
        }
       }
       return NULL;
    }
};