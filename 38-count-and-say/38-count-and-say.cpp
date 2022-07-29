class Solution {
public:
    
    string generator(string str){
      string ans = "";
      unordered_map<char, int> tempCount;  // To count integer sequence.
      for(int i=0; i<str.length()+1; i++){

        // When current character is different from previous one, we clear the map and update the ans.
        if(tempCount.find(str[i]) == tempCount.end() && i>0){
          // Capture the iterator at this point.
          auto prev = tempCount.find(str[i-1]);
          ans += to_string(prev->second) + prev->first;
          // clear the map.
          tempCount.clear();
        }
        // when current character is same as previous one, we increase its count value.
        tempCount[str[i]]++;
      }
      return ans;
}
    
    string countAndSay(int n) {
        // res variable keeps track of string from 1 to n-1.
      string res = "1";

      // for loop iterates upto n-1 times.
      for(int i=1; i<n; i++){
        res = generator(res);
      }

      return res;
        }
};