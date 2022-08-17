class MinStack {
    private:
        stack<int> s1;
        stack<int> s2;
    public:
    MinStack() {
    }
    
    void push(int val) {
        s1.push(val);
        if(s2.empty() || s2.top() >= val)
            s2.push(val);
        return;
    }
    
    void pop() {
        if(s1.empty())
            return;
        int ans = s1.top();
        s1.pop();
        if(ans == s2.top())
            s2.pop();
        return;
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        if(s2.empty())
            return -1;
        else
            return s2.top();
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