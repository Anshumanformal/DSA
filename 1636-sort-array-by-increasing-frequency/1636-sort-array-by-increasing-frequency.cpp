typedef pair<int,int> P;

class Solution {
public:
  // comparator function for priority queue  
    struct comparator{
        bool operator()(P& p1, P& p2){
            if(p1.second == p2.second)
                return p1.first < p2.first;

            return p1.second > p2.second;
        }
    };
    
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int,int> mp;
        for(int i : nums)
            mp[i]++;
        
        priority_queue<P, vector<P>,comparator> pq(mp.begin(), mp.end());
        vector<int> res;
        
        while(pq.size()){
            int currentKey = pq.top().first;
            int currentFrequency = pq.top().second;
            
            while(currentFrequency--)
                // append the currentKey as many times as the frequency
                res.push_back(currentKey);
            pq.pop();
        }
        
        return res;
    }
};