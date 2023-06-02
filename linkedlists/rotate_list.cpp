#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    struct ListNode* next;
};
class Solution {
public:
    int count(ListNode* temp)
    {
        int count = 0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        return count;
    };
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head) return NULL;
        if(!(head->next)) return head;

        int w = count(head);
        k = k%w;
        while(k--)
        {
            struct ListNode* temp  = head;
            struct ListNode* prevtemp = NULL;
            while(temp->next)
            {
                prevtemp = temp;
                temp = temp->next;
            }
            temp->next = head;
            head = temp;
            prevtemp->next = NULL;
        }
        return head;
    }
};