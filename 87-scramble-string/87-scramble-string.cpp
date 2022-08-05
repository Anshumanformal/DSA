class Solution {
public:
    
    unordered_map<string,bool> mp;
    bool solve(string s1, string s2){

        // Check the length of given strings. If the string lengths are unequal, then they can't be scrambled.
        if(s1.length() != s2.length())
            return false;

        int n = s1.length();
        // empty strings are scambled strings
        if(n == 0)
            return true;
        // if both the strings are equal i.e. same then both are scrambled strings
        if(s1 == s2)
            return true;

        // Check for anagram condition. E.g. - 'secure' and 'rescue' are anagrams.
        string copy_s1 = s1, copy_s2 = s2; // making a copy of both strings to avoid manipulation of original strings
        sort(copy_s1.begin(), copy_s1.end());
        sort(copy_s2.begin(), copy_s2.end());

        // After sorting string characters become lexicographically sorted. If even after sorting both strings are unequal, then they are not scrambled. Hence, return false.
        if(copy_s1 != copy_s2)
            return false;

        // make key of type string for searching in the map
        string key = s1 + " " + s2;
        // check if both the strings are already present in the map
        if(mp.find(key) != mp.end())
            return mp[key];

        bool flag = false;    

        // check for every character
        for(int i=1; i<n; i++){

            // condition for scrambled

            // Check if S2[0...i] is a scrambled
            // string of S1[n-i...n] and S2[i+1...n]
            // is a scramble string of S1[0...n-i-1]
            if(isScramble(s1.substr(0,i), s2.substr(n-i,i))
                &&
               isScramble(s1.substr(i,n-i), s2.substr(0,n-i))
            ){
                flag = true;
                return true;
            }

            // condition for not scrambled

            // Check if S2[0...i] is a scrambled
            // string of S1[0...i] and if S2[i+1...n]
            // is a scrambled string of S1[i+1...n]
            if(isScramble(s1.substr(0,i), s2.substr(0,i))
                &&
               isScramble(s1.substr(i,n-i), s2.substr(i,n-i))
            ){
                flag = true;
                return true;
            }

        }

        // add the key and flag value for upcoming recursive calls
        mp[key] = flag;

        // If none of the above
        // conditions are satisfied
        return false;    
    }
    
    bool isScramble(string s1, string s2) {
        if (solve(s1, s2))
            return true;
        else
            return false;
    }
};