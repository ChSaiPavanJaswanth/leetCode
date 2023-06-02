//INCOMPLETE, COMPLETE THE GIVEN QUESTION LATER.
#include<bits/stdc++.h>
using namespace std;
struct ListNode{
    int val;
    struct ListNode* next;
};
 long int add_strings(string a , string b)
{
    long int sum =0;
    if(a.length()>b.length())
    {
        for(int i=0; i<((a.length())-(b.length())); i++)
        {
            b=b+"0";
        }
    }
    else
    {
        for(int i=0; i<(b.length())-(a.length()); i++)
        {
            a=a+"0";
        }
    }
    int carry = 0;
    for(int i=0; i<a.length() ; i++)
    {
        int value = (a[i]-48)+(b[i]-48) + carry;
        carry = 0;
        if(value>9)
        {
            carry = 1;
            value = value - 10;
        }
        sum = sum + value*pow(10,i);
    }
    sum = sum + carry*pow(10,a.length());
    long int newsum=0;
    while(sum)
    {
        newsum= 10*newsum + sum%10;
        sum = sum/10;
    }
    return newsum;
}
ListNode* create_list(vector<int> v)
{
    ListNode* first = new struct ListNode();
    first->val = v[0];
    first->next = NULL;
    ListNode* temp=first;
    for(int i=1; i<v.size(); i++)
    {
        ListNode* newnode = new struct ListNode();
        newnode->val = v[i];
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
    return first;
}
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        string sum1="",sum2="";
        ListNode* sum_1 = l1;
        ListNode* sum_2 = l2;
        while(sum_1!=NULL)
        {
            sum1 = sum1 + to_string(sum_1 -> val);
            sum_1 = sum_1 -> next;
        }
        while(sum_2!=NULL)
        {
            sum2 = sum2 + to_string(sum_2 -> val);
            sum_2 = sum_2 -> next;
        }
        cout<<sum1<<sum2<<endl;
        long int sum = add_strings(sum1, sum2);
        vector<int> v;
        while(sum)
        {
            v.push_back(sum%10);
            sum = sum/10;
        }
        ListNode* l3 = create_list(v);
        return l3;
    }
};
// int main()
// {
//     vector<int> v1;
//     v1.push_back(3);
//     v1.push_back(2);
//     v1.push_back(5);
//     vector<int> v2;
//     v2.push_back(4);
//     v2.push_back(1);
//     struct node* v_1 = create_list(v1);
//     struct node* v_2 = create_list(v2);
//     struct node*temp = v_1;
//     while(temp)
//     {
//         cout<<temp->data;
//         temp = temp->next;
//     }
// }