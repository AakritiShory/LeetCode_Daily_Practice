class MinStack {
public:
    stack<int> st;
    MinStack() {//constructor
        
    }
    
    void push(int val) {//o1
        st.push(val);
        
    }
    
    void pop() {//o1
    st.pop();
        
    }
    
    int top() {//o1
     return st.top();
        
    }
    
    int getMin() {
        stack<int> helper;
        int mn=INT_MAX;
        while(st.size()>0){
            mn=min(mn,st.top());
            helper.push(st.top());
            st.pop();
        }
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
        return mn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */