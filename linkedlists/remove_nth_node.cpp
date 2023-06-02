#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    struct ListNode* next;
};
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n){
        int numberOfNodes = 0;
        struct ListNode* temp = head;
        while(temp)
        {
            numberOfNodes++;
            temp=temp->next;
        }
        temp = head;
        struct ListNode* prevtemp = NULL;
        int position = numberOfNodes - n;
        if(position==0)
        {
            head = head->next;
            return head;
        }
        while(position)
        {
            prevtemp=temp;
            temp=temp->next;
            position--;
        }
        prevtemp->next = temp->next;
        temp->next = NULL;
        return head;
    }
};