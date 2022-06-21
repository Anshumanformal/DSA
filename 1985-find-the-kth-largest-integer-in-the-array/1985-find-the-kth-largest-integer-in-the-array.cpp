class NumStrMinComparator{
    public:
      bool operator()(string& s1, string& s2){
          if(s1.size() != s2.size())
              return s1.size() > s2.size();
          return s1 > s2;
      }  
};

class Solution {
    public:
        string kthLargestNumber(vector<string>& nums, int k) {
            // for k'th largest number we can create a minHeap
            priority_queue<string, vector<string>, NumStrMinComparator> minHeap;
            for(string& num : nums){
                minHeap.push(num);
                if(minHeap.size() > k)
                    minHeap.pop();
            }

            return minHeap.top();
        }
};