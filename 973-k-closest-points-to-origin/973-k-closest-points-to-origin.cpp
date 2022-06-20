class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // closest points are the ones with lowest euclidean distance value
        /*
        -Which heap to create?
        If minHeap is created, then minimum euclidean distance is present on top and popped sometimes when heap size is greater than k. The minheap then contains elements FARTHEST from origin.
        
        If maxHeap is created, then maximum elements are present on top. At times they are popped and the remaining elements are the ones having least euclidean distance.
        
        */
        
        // 1st solution - using partial sort
        
        // partial_sort(points.begin(), points.begin() + K, points.end(), [](vector<int>& p, vector<int>& q) {
        //     return p[0] * p[0] + p[1] * p[1] < q[0] * q[0] + q[1] * q[1];
        // });
        // return vector<vector<int>>(points.begin(), points.begin() + K);
        
         // 2nd solution - using Priority queue(maxHeap)
        
        priority_queue<pair<int,int>> pq;
        int i=0;
        
        for(auto& it : points){
            int euclidean_distance = it[0]*it[0] + it[1]*it[1];
            pq.push({euclidean_distance, i});
            if(pq.size() > k)
                pq.pop();
            i++;
        }
        
        vector<vector<int>> res;
        while(pq.size()){
            int i = pq.top().second;
            res.push_back({points[i][0], points[i][1]});
            pq.pop();
        }
        
        return res;
        
    }
};