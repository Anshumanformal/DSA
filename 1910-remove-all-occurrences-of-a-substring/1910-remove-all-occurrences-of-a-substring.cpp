class Solution {
public:
    string removeOccurrences(string s, string part) {
        int original_string_size = s.size();
        int part_size = part.size();
        
        if(part_size==0 || original_string_size==0)
            return s;
        
        while(s.find(part)!=string::npos)
            s.erase(s.find(part), part_size);
        
        return s;
        }
};