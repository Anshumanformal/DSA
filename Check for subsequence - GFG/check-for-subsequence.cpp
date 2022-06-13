// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std; 

 // } Driver Code Ends

class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
        //Using two pointer
        int i=0, j=0, m=A.length(), n=B.length();
        while(i<m && j<n){
            if(A[i] == B[j])
                i++, j++;
            else j++;
        }
        if(i == m) return true; 
        if(j==n && i != m) return false;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;  
        Solution ob;
        if(ob.isSubSequence(A,B))
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0; 
} 
  // } Driver Code Ends