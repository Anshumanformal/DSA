class Solution {
public:
    bool isPalindrome(string s) {
      
        if(s.empty()) return true;
        int i=0, j = s.size();
        while(i<j){
            
            if(isalnum(s[i]) == false){
                i++;
                continue;
            }
            if(isalnum(s[j]) == false){
                j--;
                continue;
            }
            if(tolower(s[i++]) != tolower(s[j--]))
                return false;
        }
        return true;     
    }
};

/*
 * O(n) Time and
 * O(1) Space
 */