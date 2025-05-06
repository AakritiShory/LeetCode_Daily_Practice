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
    TreeNode* tree(vector<int> &inorder, int is ,int ie,
                    vector<int>&postorder,int ps,int pe,
                    map<int,int>&imp){
                            if(ps>pe || is>ie) return NULL;
                            //root store krayenge last vali post ki
                            TreeNode* root=new TreeNode(postorder[pe]);
                            int inRoot=imp[postorder[pe]];
                            int numsLeft=inRoot-is;
                            root->left=tree(inorder,is,inRoot-1,postorder,ps,ps+numsLeft-1,imp);
                            root->right=tree(inorder,inRoot+1,ie,postorder,ps+numsLeft,pe-1,imp);
                            return root;
                    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()) return NULL;
        map<int,int> imp;//inorder map
        for(int i=0;i<inorder.size();i++){
            imp[inorder[i]]=i; //[index maintain rahe map mei vector acc]
        }
        return tree(inorder,0,inorder.size()-1,
                    postorder,0,postorder.size()-1,imp);
    }
};