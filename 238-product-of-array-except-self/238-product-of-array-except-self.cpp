class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCount= count(nums.begin(), nums.end(), 0);
        int product=1;
        
        if(zeroCount > 1)
            return vector<int> (size(nums));
        
        for(auto c : nums)
            if(c) product *= c;
        
        for(auto& c : nums)
            if(zeroCount)
                c = c ? 0 : product;
            else c = product / c;
        
        return nums;
    }
};