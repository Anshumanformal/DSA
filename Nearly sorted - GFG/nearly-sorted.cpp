// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int k){
        // Your code here
         priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<=k;i++){
            q.push(arr[i]);
        }
        vector<int>ans;
         for(int i = k + 1; i<num; ++i)
	    {
	         ans.push_back(q.top ());
	        q.pop();
	        q.push(arr[i]);
	        
	    }
        
        while(q.size()){
            int a = q.top();
            q.pop();
            ans.push_back(a);
        }
        
        return ans;
    }
};

// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    int num, K;
	    cin>>num>>K;
	    
	    int arr[num];
	    for(int i = 0; i<num; ++i){
	        cin>>arr[i];
	    }
	    Solution ob;
	    vector <int> res = ob.nearlySorted(arr, num, K);
	    for (int i = 0; i < res.size (); i++)
	        cout << res[i] << " ";
	        
	    cout<<endl;
	}
	
	return 0;
}
  // } Driver Code Ends