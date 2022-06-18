class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> countMap;
        
        // creating a minHeap
        priority_queue<int,vector<int>,greater<int>> minHeap;
        
        for(auto i : nums)
            countMap[i]++;
        
        for(auto& i : countMap){
            //pushing values from map into minHeap
            minHeap.push(i.second);
            // check the size of minHeap at each iteration to be <= k
            while(minHeap.size() > k)
                minHeap.pop();
        }
        
        vector<int> res;
        for(auto& i : countMap){
            if(i.second >= minHeap.top())
                res.push_back(i.first);
        }
        
        return res;
    }
};