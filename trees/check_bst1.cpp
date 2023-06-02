#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
class Solution{
    vector<int> nodes;
    void inOrderTraversal(struct TreeNode* node)
    {
        if(node->left) inOrderTraversal(node->left);
        nodes.push_back(node->val);
        if(node->right) inOrderTraversal(node->right);
    }
    bool isValidBST(TreeNode* root)
    {
        inOrderTraversal(root);
        for(int i=0; i<nodes.size()-1 ; i++)
        {
            if(nodes[i]>=nodes[i+1]) return false;
        }
        return true;
    }
};