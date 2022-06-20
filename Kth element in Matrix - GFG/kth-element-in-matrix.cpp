// { Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
    
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        int r;
        cin>>r;
        cout<<kthSmallest(mat,n,r)<<endl;
    }
     // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
      return 0;
}
// } Driver Code Ends



int kthSmallest(int matrix[MAX][MAX], int n, int k)
{
  //Your code here
    
        // for k'th smallest element, we have to create a maxHeap
        priority_queue<int> maxHeap; // we are storing an integer because, each element of matrix is an integer
        for(int r=0; r<n; ++r){
            for(int c=0; c<n; ++c){
                maxHeap.push(matrix[r][c]);
                if(maxHeap.size() > k)
                    maxHeap.pop();  // restricting the size of maxHeap to k
            }
        }
        
        return maxHeap.top();
}
