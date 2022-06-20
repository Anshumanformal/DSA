class Solution {
private:
    struct comparator{
      bool operator()(const pair<int,string>& p1, const pair<int,string>& p2){
          if(p1.first != p2.first)
              // here, we return the value of that element which is lexicographically
              // greater than the other
              return p1.first > p2.first;
          else return p1.second < p2.second;
      }  
    };

public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int> hashMap;
        // put all words from vector to hashMap
        for(string& word : words)
            hashMap[word]+=1;
        
        priority_queue<pair<int,string>,vector<pair<int,string>>, comparator> pq;
        
        for(auto it = hashMap.begin(); it != hashMap.end(); ++it){
            pq.push({it->second, it->first});
            if(pq.size() > k)
                pq.pop();
        }
        
        vector<string> res;
        while(pq.size()){
            res.insert(res.begin(), pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};