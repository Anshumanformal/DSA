// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
public:
    
    void solve(int open, int close, string output, vector<string>& answer){
    
    // base condition
    if(open == 0 && close == 0){
        answer.push_back(output);
        return;
    }
    else {
        // check if we have the open count, then push the opening bracket to the string
        if(open != 0){
            string op1 = output;
            op1.push_back('(');
            solve(open-1, close, op1, answer);
    }
        // if the open count is less than the close count, then we can add the closing bracket to the string
        if(open < close){
            string op2 = output;
            op2.push_back(')');
            solve(open, close-1, op2, answer);
            return;
        }
    }
}
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here
    int open = n, close = n; // using two separate variable to store the count of open and closed brackets
    vector<string> answer;
    string output = "";
    solve(open, close, output, answer);
    return answer;
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends