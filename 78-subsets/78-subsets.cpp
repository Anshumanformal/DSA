class Solution {
public:
    
    void solve(vector<int>& nums, int i, vector<int>& sub, vector<vector<int>>& subs){
        subs.push_back(sub);
        for(int j=i; j<nums.size(); j++){
            sub.push_back(nums[j]);
            solve(nums, j+1, sub, subs);
            sub.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> answer;
        vector<int> sub;
        solve(nums, 0, sub, answer);
        return answer;
        
    }
};