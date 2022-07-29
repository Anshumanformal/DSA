class Solution {
public:
    void nextPermutation(vector<int>& v) {
    
    bool val = next_permutation(v.begin(), v.end());

      if(val == false)
      cout << "No permutation possible for next_permutation!" << endl;
     else{
      cout << "[";
      for(auto i:v){
        cout << i << ",";
      }cout << "]";
      cout << endl;
     }
    }
};