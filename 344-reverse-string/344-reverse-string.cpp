class Solution {
public:
    void reverseString(vector<char>& s) {
       
        // 1st solution
        // reverse(s.begin(), s.end());
        
        // 2nd solution - using two pointer approach
        int i = 0, j = s.size() - 1;
        while(i < j){
            swap(s[i++], s[j--]); 
        }
        
    }
};