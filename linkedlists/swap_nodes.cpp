#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    struct ListNode* next;
};
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {

        if(!head) return NULL;
        if(!(head->next)) return head;

        struct ListNode *temp = head->next;
        struct ListNode *prevtemp = head;
        while(prevtemp || temp)
        {
            swap(temp->val , prevtemp->val);
            prevtemp = prevtemp->next->next;
            temp= temp->next->next;
        }
    }
};