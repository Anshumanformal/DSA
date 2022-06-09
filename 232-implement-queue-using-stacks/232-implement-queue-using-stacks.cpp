class MyQueue {
public:
    stack <int> input, output; // creating an input stack and an output stack
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop(void) {
        int x = peek();
        output.pop();
        return x;
    }
    
    int peek(void) {
        if(output.empty())  // check whether the output stack is empty
            while(input.size()) // If the output stack is empty then until the input
                // stack becomes empty, grab the top element from the input stack and push
                // it into the output stack. Afterwards, remove the top element of the input
                // stack.
                output.push(input.top()), input.pop();
        return output.top();    // return the top value of the output stack
    }
    
    bool empty(void) {
        return input.empty() and output.empty(); // return the condition when both
        // input and output stacks are empty
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