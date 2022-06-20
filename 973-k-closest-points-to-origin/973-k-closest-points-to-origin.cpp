class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        // closest points are the ones with lowest euclidean distance value
        /*
        -Which heap to create?
        If minHeap is created, then minimum euclidean distance is present on top and popped sometimes when heap size is greater than k. The minheap then contains elements FARTHEST from origin.
        
        If maxHeap is created, then maximum elements are present on top. At times they are popped and the remaining elements are the ones having least euclidean distance.
        
        */
        
        // 1st solution - using partial sort
        partial_sort(points.begin(), points.begin() + K, points.end(), [](vector<int>& p, vector<int>& q) {
            return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
        });
        return vector<vector<int>>(points.begin(), points.begin() + K);
        
//         priority_queue<pair<int,<pair<int,int>>>> pq; // maxHeap
//         for(int i=0; i<points.size(); ++i){
//             pq.push( {points[i][0] * points[i][0]} )
//         }
        
        
//         vector<vector<<int>> res;
    }
};