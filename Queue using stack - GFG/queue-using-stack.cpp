// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        input.push(x);
    }

    int dequeue() {
        int val = -1;
        if(output.size()){
            val = output.top();
            output.pop();
        }
        else{
            // Here, output stack doesn't have elements for deque, but input stack has.
            // So, we take out elements from the input stack and first push them into the output stack.
            // Then, we take out the element from the output stack.
            while(input.size()){
                output.push(input.top());
                input.pop();
            }
            if(output.size()){
                val = output.top();
                output.pop();
            }
        }
        return val;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Queue ob;

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            ob.enqueue(a);
        }
        else if(QueryType==2)
        {
            cout<<ob.dequeue()<<" ";

        }
        }
    cout<<endl;
    }
}
  // } Driver Code Ends