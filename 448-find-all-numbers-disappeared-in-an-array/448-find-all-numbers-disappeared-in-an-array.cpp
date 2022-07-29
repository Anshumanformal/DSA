class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int len = nums.size();
        for(int i=0; i<nums.size(); i++){
            int m = abs(nums[i])-1;
             // if the number is positive, convert it to negative, else proceed
            nums[m] = nums[m]>0 ? -nums[m] : nums[m];
        }
            vector<int> res;
            for(int i=0; i<len; i++){
                // if the current element is positive, then push that element into the vector.
                if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    }
};