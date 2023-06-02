//correct code;
#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
class Solution{
    public:
    vector<int> node;
    // struct TreeNode* createTree()
    // {
    //     struct TreeNode* root;

    // }
    // struct TreeNode* createNode(int val)
    // {
    //     struct TreeNode* temp = new struct TreeNode;
    //     temp->val = val;
    //     temp->left = temp->right = NULL;
    // }
    void inOrder(TreeNode* nodes)
    {
        if(nodes==NULL)
        {
            return;
        }
        if(nodes->left) inOrder(nodes->left);
        node.push_back(nodes->val);
        if(nodes->right) inOrder(nodes->right);
    }
    int i=0;
    struct TreeNode* inOrdercheck(TreeNode* nodes)
    {
        if(nodes==NULL)
        {
            return nodes;
        }
        inOrdercheck(nodes->left);
        nodes->val = node[i];
        i++;
        inOrdercheck(nodes->right);
    }
    void recovertree(TreeNode* root)
    {
        inOrder(root);
        sort(node.begin() , node.end());
        root = inOrdercheck(root);
    }
};