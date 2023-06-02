#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode()
    {
        val = 0;
        left = right = NULL;
    }
    TreeNode(int x)
    {
        val = x;
        left=right=NULL;
    }
    TreeNode(int x , TreeNode* left , TreeNode* right)
    {
        val = x;
        this->left = left;
        this->right = right;
    }
};
class Solution {
public:
    vector<int> nodes;
    void traversal(TreeNode* node)
    {
        if(node==NULL)
        {
            return;
        }
        else{
            inorderTraversal(node->left);
            nodes.push_back(node->val);
            inorderTraversal(node->right);
        }
        return;
    }
    vector<int> inorderTraversal(TreeNode* root){
        traversal(root);
        return nodes;
    }
};