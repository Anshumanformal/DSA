class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
    // Naive solution - gives TLE
        
    //     for(int i=0; i<nums.size(); i++){
    //         for(int j=i+1; j<nums.size(); j++){
    //             for(int k=j+1; k<nums.size(); k++){
    //                 if((i<j and j<k) && (nums[i] < nums[k] and nums[k] < nums[j])){
    //                     return true;
    //                 }        
    //         }
    //     }
    // }
    // return false;
        
        stack<int> st;
        int s2 = INT_MIN;
        
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i] < s2)
                return true;
            else{
                while(!st.empty() && st.top() < nums[i]){
                    s2 = max(s2,st.top());
                    st.pop();
                }
                // push
                st.push(nums[i]);
            }
        }
        return false;
    }
};