/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
class MyStack {
public:
    struct node *front, *rear;
    bool Empty;
    MyStack() {
        struct node* first = new struct node;
        front = first;
        rear = first;
        Empty = true;
    }
    struct node* createNode(int x)
    {
        struct node* temp = new struct node;
        temp->next = NULL;
        temp->data = x;
        return temp;
    }
    void push(int x) {
        Empty = false;
        struct node* nextNode = createNode(x);
        rear->next = nextNode;
        rear = rear->next;
    }
    int pop() {
        struct node* temp=front;
        while(temp->next != rear)
        {
            temp = temp->next;
        }
        rear = temp;
        temp=temp->next;
        int popped = temp->data;
        delete(temp);
        rear->next=NULL;
        if(!(rear->data)) Empty = true;
        return popped;
    }
    int top() {
        return rear->data;
    }
    bool empty() {
        return Empty;
    }
};