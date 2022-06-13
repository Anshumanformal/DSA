class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        if (n == 1) return 0;
        long long int sum=0, sum_ans=0;
        for(int i=0; i<n; i++)
            sum += nums[i];
        
        for(int i=0; i<n; i++){
            sum -= nums[i];
            if(sum == sum_ans)
                return i;
            
            sum_ans += nums[i];
        }
        return -1;
    }
};