#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    struct ListNode* next;
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> v;
        for(int i=0; i<lists.size(); i++)
        {
            struct ListNode* temp = lists[i];
            if(temp==NULL)
            {
                v.push_back(INT_MIN);
                continue;
            }
            while(temp)
            {
                v.push_back(temp->val);
                temp=temp->next;
            }
        }
        for(int i=0;i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        if(v.size()==0) return NULL;
        sort(v.begin(),v.end());
        struct ListNode* first = new struct ListNode;
        struct ListNode* temp = first;
        bool first = true;
        for(int i=0; i = v.size(); i++)
        {
            if(v[i]==INT_MIN) continue;

            if(first)
            {
                temp->val = v[i];
                temp->next = NULL;
                first = false;
            }
            else{
                struct ListNode* node = new struct ListNode;
                node->val = v[i];
                node->next = NULL;
                temp->next = node;
                temp = temp->next;
            }
        }
        return first;
    }
};