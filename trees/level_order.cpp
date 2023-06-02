#include<bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};
class Solution {
public:
    vector<vector<int>> order;
    // vector<int> v;
    // void leftOrder(TreeNode* node)
    // {
    //     if(node==NULL) return;

    // }
    // void rightOrder(TreeNode* node)
    // {
    //     if(node==NULL) return;
    // }
    queue<struct TreeNode*> q;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return order;
        //v.push_back(root->val);
        //order.push_back(v);
        //leftOrder(root->left);
        //rightOrder(root->right);
        q.push(root->left);
        q.push(root->right);
        while(true)
        {
            if(q.size()==0) break;
            if(q.front()==NULL) q.pop();
            
        }
    }
};