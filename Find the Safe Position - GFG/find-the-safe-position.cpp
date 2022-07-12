// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
    void solve(vector<int>& v, int index, int k, int& ans){
      if(v.size() == 1){
        ans = v[0];
        return;
      }
      index = ((index + k)% v.size());
      v.erase(v.begin() + index);
      solve(v,index,k,ans);
      return;
    }
  
    int safePos(int n, int k) {
        // code here
       int ans = -1;
       int index=0;
       vector<int> v;
       for(int i=1; i<=n; i++){
           v.push_back(i);
       }
       solve(v,index,k-1,ans);
       return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends