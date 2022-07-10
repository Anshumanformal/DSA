// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

    void solve(int N, string op, int ones, int zeros, vector<string>& vec){
        if(N == 0){
            vec.push_back(op);
            return;
        }
        string op1 = op;
        op1.push_back('1');
        solve(N-1, op1, ones+1, zeros, vec);
        if(ones > zeros){
            string op2 = op;
            op2.push_back('0');
            solve(N-1, op2, ones, zeros+1, vec);
        }
    }
        
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string> vec;
	    string op="";
	    int ones = 0;
	    int zeros = 0;
	    solve(N, op, ones, zeros, vec);
	    return vec;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}  // } Driver Code Ends