class Solution {
public:
    
    // best solution
    
    // more simple approach is to sort the strings
    // after sorting, the strings become same
    // sort(s.begin(),s.end());
    // sort(t.begin(),t.end());
    // return s == t;
    
    // second best solution
    bool isAnagram(string s, string t) {
        // first check if length is unequal
        if(s.length() != t.length()) return false;
        unordered_map<char, int> countMap;
        
        int size = s.length();
        
        for(int i=0; i<size; i++){
            countMap[s[i]]++;
            countMap[t[i]]--;
        }
        
        for(auto count : countMap){
            if(count.second) return false;
        }
        return true;
        
    }
};