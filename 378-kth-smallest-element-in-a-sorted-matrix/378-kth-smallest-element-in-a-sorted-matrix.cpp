class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size(), n = matrix[0].size();
        // for k'th smallest element, we have to create a maxHeap
        priority_queue<int> maxHeap; // we are storing an integer because, each element of matrix is an integer
        for(int r=0; r<m; ++r){
            for(int c=0; c<n; ++c){
                maxHeap.push(matrix[r][c]);
                if(maxHeap.size() > k)
                    maxHeap.pop();  // restricting the size of maxHeap to k
            }
        }
        
        return maxHeap.top();
    }
};