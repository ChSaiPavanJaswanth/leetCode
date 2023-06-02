//NOT CORRECT FOR ALL THE TEST CASES
#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
class Solution{
    public:
    bool check = true;
    void inOrderTraversal(struct TreeNode* node)
    {
        if(node==NULL)
        {
            return;
        }
        else if((node->left==NULL) || (node->right==NULL)){
            if(node->left==NULL && node->right==NULL)
            {
                return;
            }
            else if(node->left==NULL)
            {
                if(node->val >= node->right->val)
                {
                    check = false;
                    return;
                }
                inOrderTraversal(node->right);
            }
            else{
                if(node->val <= node->left->val)
                {
                    check = false;
                    return;
                }
                inOrderTraversal(node->left);
            }
        }
        else{
            if(((node->val)<=(node->left->val)) || ((node->val)>=(node->right->val)))
            {
                check = false;
                return;
            }
            inOrderTraversal(node->left);
            inOrderTraversal(node->right);
        }
    }
    bool isValidBST(TreeNode* root)
    {
        check = true;
        inOrderTraversal(root);
    }
};