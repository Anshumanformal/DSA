class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // 1st solution
        // sort(nums.begin(), nums.end(), greater<int>());
        // return nums[k-1];
        
        // 2nd solution - C++ STL has nth_element built-in function
        nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
        return nums[k - 1];
        
        // 3rd solution - C++ STL has partial_sort built-in function
        // partial_sort(nums.begin(), nums.begin() + k, nums.end(), greater<int>());
        // return nums[k - 1];
        
        // since k'th largest element is asked, hence we create a minHeap for this question.
        // priority_queue<int,vector<int>,greater<int>> pq;
        // for(int num : nums){
        //     pq.push(num);
        //     if(pq.size() > k)
        //         pq.pop();
        // }
        // return pq.top();
        
        // A maxHeap can also be created.
        
        
    }
};