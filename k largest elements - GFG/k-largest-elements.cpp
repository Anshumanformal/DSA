// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	   // 1st method - using Partial sort
	   // partial_sort(arr, arr+k,arr+n, greater<int>());
	   // vector<int>res;
	   // for(int i=0; i<k; i++)
	   //     res.push_back(arr[i]);
	    
	   // return res;
	   
	  // 2nd method - using Heap
	  priority_queue<int, vector<int>, greater<int>> minHeap;
      for(int i=0; i<n; i++){
        minHeap.push(arr[i]);
        while(minHeap.size() > k)
          minHeap.pop();
      }
    
      vector<int> vec;
      while(minHeap.size()){
        vec.push_back(minHeap.top());
        minHeap.pop();
      }
    
      reverse(vec.begin(), vec.end());
      return vec;
      
      
      // 3rd method - simply sort in descending order and print the first 3 values
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.kLargest(arr, n, k);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends