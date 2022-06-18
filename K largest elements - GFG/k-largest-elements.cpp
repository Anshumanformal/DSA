// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        // to find k largest elements, we create a minHeap
        vector<int> ans;
        priority_queue<int, vector<int>,greater<int>> pq;
        
        // say k=2, loop runs 2 times
        for(int i=0; i<k; i++){
            pq.push(arr[i]);
        }
        
        for(int i=k; i<n; i++){
            if(pq.top() <= arr[i]){
                // update the priority queue with new larger elements
                pq.pop();
                pq.push(arr[i]);
            }
        }
        
        // while the priority queue is not empty, we have the k large elements with us
        while(pq.size()){
            ans.push_back(pq.top());
            pq.pop();
        }
        // since pushing reverses the sequence of numbers in the vector, hence we reverse the vector
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n;i++)
            cin>>arr[i];
        Solution ob;
        vector<int> result = ob.kLargest(arr, n, k);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout << endl;
        
    }
    return 0;
}
  // } Driver Code Ends