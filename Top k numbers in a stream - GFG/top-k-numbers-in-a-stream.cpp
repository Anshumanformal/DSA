// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
 private:
    struct cmp{
        bool operator() (pair<int,int> a,pair<int,int> b){
           if(a.second < b.second) return true;
           if(a.second == b.second)
             return (a.first > b.first);
           return false;
        }
    };

  public:
    vector<int> kTop(int a[], int n, int k) 
    { 
        //code here.
       vector<int> res;
        priority_queue< pair<int,int> , vector<pair<int,int>>, cmp> pq;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++)
        {
            mp.clear();
            for(int j = 0; j <= i; j++)
                mp[a[j]]++;
            for(auto it : mp)
                pq.push({it.first, it.second});
            int count = 0;
            while(!pq.empty() && count < k)
            {
                res.push_back(pq.top().first);
                count++;
                pq.pop();
            }
            while(!pq.empty())
            {
                pq.pop();
            }
        }
        return res;
    }
};


// { Driver Code Starts.

int main() {
	long long t;
	
	cin >> t;
	
	while(t--){
	    long long n;
	    long long k;
	    cin >> n;
	    cin >> k;
	    int a[n];
	    for(long long i = 0;i<n;i++){
	        cin >> a[i];
	    }
	        Solution ob;
	        vector<int> ans;
	        ans=ob.kTop(a,n,k);
	        for(int i=0;i<ans.size();i++)
	        {
	        cout<<ans[i];
	        cout<<" ";
	        }
	        cout<<'\n';
	    }
	return 0;
}
  // } Driver Code Ends