// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        int ans = 0;
        stack<int> st;
        for(int i=0; i<S.size(); i++){
            if(S[i] >= '0' && S[i] <= '9')
                st.push(S[i] - '0');
            
            else{
                int x2 = st.top();
                st.pop();
                int x1 = st.top();
                st.pop();
                
                switch(S[i]){
                    case '+': ans = x1 + x2; break;
                    case '-': ans = x1 - x2; break;
                    case '*': ans = x1 * x2; break;
                    case '/': ans = x1 / x2; break;
                }
                st.push(ans);                
            }
        }
        // return ans; // we can also return ans, as latest value of ans
        // would be updated with stack.top()
        return st.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends