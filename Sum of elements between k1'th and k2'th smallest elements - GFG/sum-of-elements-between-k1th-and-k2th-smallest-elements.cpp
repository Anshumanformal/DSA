// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    long long kthSmallestElement(long long arr[], long long n, long long k){
        priority_queue<long long> pq(arr, arr+n); // maxHeap
        while(pq.size() > k)
            pq.pop();
        return pq.top();
    }
    
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        // 1st solution - using sorting
        // sort(A,A+N);
        // long long res=0;
        // for(long long i=K1; i<K2-1; i++)
        //     res += A[i];
        
        // return res;
        
        // 2nd solution
        long long sum = 0;
        
        long long k1 = kthSmallestElement(A,N,K1);
        long long k2 = kthSmallestElement(A,N,K2);

        for(long long i=0; i<N; i++)
          if(A[i] > k1 && A[i] < k2)
                sum += A[i];
        return sum;
    }
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends