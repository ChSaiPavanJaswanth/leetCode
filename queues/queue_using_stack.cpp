#include<bits/stdc++.h>
using namespace std;
class MyQueue {
public:
    stack<int> st;
    stack<int> st1;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        while(st.size()>1)
        {
            st1.push(st.top());
            st.pop();
        }
        int x = st.top();
        st.pop();
        while(st1.size()!=0)
        {
            st.push(st1.top());
            st1.pop();
        }
        return x;
    }
    
    int peek() {
        while(st.size()>1)
        {
            st1.push(st.top());
            st.pop();
        }
        int x = st.top();
        st1.push(x);
        st.pop();
        while(st1.size()!=0)
        {
            st.push(st1.top());
            st1.pop();
        }
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */