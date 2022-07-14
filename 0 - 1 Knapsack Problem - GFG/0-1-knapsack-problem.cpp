// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int t[1001][1001];
    Solution(){
        memset(t,-1, sizeof(t));
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       /*
       Here DP can be applied because:-
       1. We are given a choice in 0-1 knapsack to either choose or not
       choose an item.
       2. We have to give the maximum subset of 'val' array. Hence, this is
       an optimisation problem.
       
       Therefore, DP can be applied here.
       */ 
       
       // Recursive code + memoized code = DP code
       if(n == 0 || W == 0){
           return 0;
       }
       if(t[n][W] != -1)
           return t[n][W];
       
       if(wt[n-1] <= W){
           return t[n][W] = max(
                val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
                knapSack(W, wt, val, n-1)
               );
       }
       else{
           return t[n][W] = knapSack(W, wt, val, n-1);
       }
       
       //----------------------------------------------------------
       // Brute force solution - recursive - TC: O(2^n), SC: O(W)
       // This solution gives Time Limit Exceeded error(TLE) error.
       
    //   if(n == 0 || W == 0)
    //         return 0;
    //   // weight is less than the total weight
    //   if(wt[n-1] <= W){
    //       return max(
    //           // choosing the item
    //           val[n-1] + knapSack(W-wt[n-1], wt, val, n-1),
    //           // not choosing the item
    //           knapSack(W, wt, val, n-1)     
    //       );
    //   }
    //   else{
    //       // not choosing because the item weight is more than W
    //       return knapSack(W, wt, val, n-1);
    //   }
       //----------------------------------------------------------
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends