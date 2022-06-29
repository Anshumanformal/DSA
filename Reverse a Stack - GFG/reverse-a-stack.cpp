// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:

    // function to insert element at the bottom of stack
    void solve(stack<int>& st, vector<int>& v){
        if(st.empty())
            return;
        
        v.push_back(st.top());
        st.pop();
        solve(st,v);
    }
    
    vector<int> Reverse(stack<int>& St){
        
        vector<int> v;
        solve(St, v);
        return v;
    }
};

// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends