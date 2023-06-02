#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
class Solution {
public:
    bool checkSymmetry(TreeNode* Left , TreeNode* Right)
    {
        if(Left==NULL && Right==NULL) return true;
        if((Left==NULL && Right!=NULL) || ((Left!=NULL) && (Right==NULL)))
        {
            return false;
        }
        // if(left->val == right->val) return true;
        if(Left->val != Right->val) return false;
        return (checkSymmetry(Left->left , Right->right) && checkSymmetry(Left->right,Right->left));
    }
    bool isSymmetric(TreeNode* root){
        if(root==NULL) return true;
        // struct TreeNode* lnode = root->left;
        // struct TreeNode* rnode = root->right;
        // while(lnode || rnode)
        // {
        //     if(checkSymmetry(lnode,rnode))
        //     {
        //         lnode=lnode->left;
        //         rnode=rnode->right;
        //     }
        //     return false;
        // }
        return checkSymmetry(root->left , root->right);
    }
};