// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:

     struct compare{
       bool operator()(pair<int,int>a,pair<int,int>b){
           if(a.first==b.first){
               return a.second<b.second;
           }
           return a.first>b.first;
           
       }
   };
   vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
       // code here
       priority_queue<pair<int,int>,vector<pair<int,int>>,compare>pq;
       for(int i=0;i<n;i++)
           pq.push({ abs(arr[i]-x) ,arr[i]});
       
       vector<int>v;
       
       while(k>0){
           if(pq.top().second!=x){
           v.push_back(pq.top().second);
           k--;
           }
           pq.pop();
       }

       return v;
   }

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> k >> x;
        Solution ob;
        auto ans = ob.printKClosest(arr, n, k, x);
        for (auto e : ans) {
            cout << e << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends