class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'A'){
                absent+=1;
                if(absent == 2) return false; // if absent count becomes 0
            }
            
            else if(s[i] == 'L')
                if(s[i+1] == 'L')
                    if(s[i+2] == 'L') // If consecutive three characters are 'L'
                        return false;
        }
        return true;
    }
};