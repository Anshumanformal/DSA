class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
      map<int,int> mp;
      for(int i=0; i<arr.size(); i++){
          mp[arr[i]]++;
      }
      int temp=0;
      vector <int>v;
      for(auto i:mp){
          v.push_back(i.second);
      }
      sort(v.begin(),v.end());
      for(int i=0; i<v.size(); i++){
          if(v[i]==temp)
                return false;
          else temp = v[i];
      }
        return true;        
    }
};