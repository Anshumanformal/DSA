class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
        
        // since k'th largest element is asked, hence we create a minHeap for this question.
        // priority_queue<int,vector<int>,greater<int>> minHeap;
        
    }
};