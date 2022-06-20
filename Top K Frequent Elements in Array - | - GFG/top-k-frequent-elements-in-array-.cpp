// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> countMap;
        
        // creating a priority queue with a pair
        priority_queue<pair<int,int>> pq;
        
        // Pushing all vector elements into map.
        for(auto i : nums)
            countMap[i]++;
        
        for(auto& i : countMap)
            pq.push({i.second, i.first});
            // check the size of minHeap at each iteration to be <= k
       
       vector<int> res;
        while(k--){
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};


// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends