class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> myVector(256, -1);
        int maxLen = 0;
        int start = -1;
        for(int i=0; i!=s.length(); i++){
            
            if(myVector[s[i]] > start)
                start = myVector[s[i]];
            
            myVector[s[i]] = i; // after going to s[i] index, we put thr value as i
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
};