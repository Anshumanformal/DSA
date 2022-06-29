// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    
    void delete_middle_element_from_stack_recursively(stack<int>& st, int k){
        if(k==1){
            st.pop();
            return;
        }

        int top_ele = st.top();
        st.pop();
        delete_middle_element_from_stack_recursively(st,k-1);
        st.push(top_ele);
        return;
    }
    
    void find_middle_element(stack<int>& st, int sizeOfStack){
        int middle_element = sizeOfStack/2 + 1;
        delete_middle_element_from_stack_recursively(st,middle_element);
    }
    
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here..
        find_middle_element(s, sizeOfStack);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}
  // } Driver Code Ends