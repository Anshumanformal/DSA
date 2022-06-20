class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // we are creating a maxHeap, because unimportant/insignificant elements would be popped out in a minHeap. In a maxHeap, minimum distance elements from 'x' would be stored in the lowermost part of maxHeap.
        priority_queue<pair<int,int>> maxHeap;
        for(int i=0; i<arr.size(); i++){
            // pushing a pair where, first element is arr[i]-x and second is the element itself(in order to retrieve it later).
            maxHeap.push({abs(arr[i]-x), arr[i]});
            if(maxHeap.size() > k)
                maxHeap.pop();
        }
        
        vector<int> res;
        while(maxHeap.size()){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        // sort the result in ascending order
        sort(res.begin(), res.end());
        return res;
    }
};