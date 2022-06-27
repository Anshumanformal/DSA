class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
        int n = T.size();
        stack<int> st;
        vector<int> ans(n);
        
        for(int i=0; i<n; i++){
            while(st.size() and T[i] > T[st.top()]){ // pop till current temp < stack's top's temp. This maintains monotonic stack
                ans[st.top()] = i - st.top(); // cur day will be next warmer day for each element that's popped
                st.pop();
            }
            st.push(i);  // push onto stack to find next warmer day for cur later on
        }
        return ans;
    }
};