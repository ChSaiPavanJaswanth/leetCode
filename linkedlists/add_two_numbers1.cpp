#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int value;
    struct ListNode* next;
};
class Solution{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        struct ListNode* temp1 = l1;
        struct ListNode* temp2 = l2;
        struct ListNode* l3 = new struct ListNode();
        struct ListNode* temp3 = l3;
        int carry =0;
        
        int val = temp1->value + temp2->value;
        if(val>9)
        { 
            val = val - 10;
            carry = 1;
        }
        temp3->next = NULL;
        temp3->value = val;
        temp1 = temp1->next;
        temp2 = temp2->next;
        while(temp1->next!=NULL && temp2->next!=NULL)
        {
            if(temp1->next==NULL)
            {
                val = (temp2->value) + carry;
                carry = 0;
                if(val>9)
                { 
                    val = val - 10;
                    carry = 1;
                }
                struct ListNode* newnode = new struct ListNode();
                newnode->value=val;
                newnode->next=NULL;
                temp3->next = newnode;
                temp3 = temp3->next;
                temp2= temp2->next;
                continue;
            }
            else if (temp2->next==NULL)
            {
                val = (temp1->value) + carry;
                carry = 0;
                if(val>9)
                { 
                    val = val - 10;
                    carry = 1;
                }
                struct ListNode* newnode = new struct ListNode();
                newnode->value=val;
                newnode->next=NULL;
                temp3->next = newnode;
                temp3 = temp3->next;
                temp1= temp1->next;
                continue;
            }
            val = (temp1->value)+(temp2->value)+carry;
            carry=0;
            if(val>9)
            {
                val = val-10;
                carry = 1;
            }
            struct ListNode* newnode = new struct ListNode();
            newnode->value=val;
            newnode->next=NULL;
            temp3->next = newnode;
            temp3 = temp3->next;
            temp1= temp1->next;
            temp2 = temp2->next;
        }
        if(carry==1)
        {
            struct ListNode* newnode = new struct ListNode();
            newnode->value=1;
            newnode->next=NULL;
            temp3->next = newnode;
        }
        return l3;
    }
};