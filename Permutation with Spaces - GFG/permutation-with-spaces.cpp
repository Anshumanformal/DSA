// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:

    void solve(vector<string>& ans, string S, string op){
        
        if(S.size() == 0){
            ans.push_back(op);
            return;
        }
        
        string op1 = op;
        string op2 = op;
        // choosing the option of taking space
        op1.push_back(' ');
        op1.push_back(S[0]);
        // choosing the option of not taking space
        op2.push_back(S[0]);
        S.erase(S.begin() + 0);
        solve(ans, S, op1); // running solve function recursively for op1 string
        solve(ans, S, op2); // running solve function recursively for op2 string
    }

    vector<string> permutation(string S){
        // Code Here
        vector<string> ans;
        
        string op = "";
        op.push_back(S[0]);
        S.erase(S.begin() + 0);
        solve(ans,S,op);
        return ans;
        
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends