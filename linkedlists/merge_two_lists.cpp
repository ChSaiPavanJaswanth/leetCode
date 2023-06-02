#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    struct ListNode* next;
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode* list3,*last;
        if(list1==NULL || list2==NULL)
        {
            if(list1)
            {
                return list1;
            }
            else if(list2)
            {
                return list2;
            }
            else{
                return NULL;
            }
        }
        if(list1->val >= list2->val)
        {
            list3 = list2;
            last = list2;
            list2 = list2->next;
            list3->next=NULL;
        }
        else{
            list3 = list1;
            last = list1;
            list1 = list1 -> next;
            list3->next = NULL;
        }
        while(list1 && list2)
        {
            if(list1->val >= list2->val)
            {
                last->next = list2;
                list2 = list2->next;
                last = last->next;
                last->next = NULL;
            }
            else{
                last->next = list1;
                list1 = list1->next;
                last = last->next;
                last->next = NULL;
            }
        }
        while(list1)
        {
            last->next = list1;
            list1 = list1->next;
            last = last->next;
        }
        while(list2)
        {
            last->next = list2;
            list2 = list2->next;
            last = last->next;
        }
        return list3;
    }
};