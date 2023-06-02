#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
class Solution{
    public:
    bool same=true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL || q==NULL)
        {
            if(p==NULL && q==NULL)
            {
                return same;
            }
            else if(p==NULL && q!=NULL)
            {
                same = false;
                return same;
            }
            else{
                same = false;
                return same;
            }
        }
        isSameTree(p->left,q->left);
        if(p->val!=q->val) same=false;
        isSameTree(p->right,q->right);
        return same;
    }
};