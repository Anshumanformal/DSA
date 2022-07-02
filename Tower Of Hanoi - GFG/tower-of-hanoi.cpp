// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int n, int from_rod, int to_rod, int aux_rod) {
        // Your code here
        long long count = pow(2,n);
        if(n == 1){
            cout<<"move disk "<< n <<" from rod "<< from_rod <<" to rod "<< to_rod<<endl;
            return 1;
        }

        toh(n-1,from_rod,aux_rod,to_rod);
        cout << "move disk " << n << " from rod " << from_rod <<
                                    " to rod " << to_rod << endl;
        toh(n-1,aux_rod,to_rod,from_rod);
        return count-1;
    }

};

// { Driver Code Starts.

int main() {

    int T;
    cin >> T;//testcases
    while (T--) {
        
        int N;
        cin >> N;//taking input N
        
        //calling toh() function
        Solution ob;
        
        cout << ob.toh(N, 1, 3, 2) << endl;
    }
    return 0;
}


//Position this line where user code will be pasted.  // } Driver Code Ends