class Solution {
public:
    
    // Method 1 - using custom sorting 
    
    // descending order sorting on the basis of number of units
//     static bool comp(vector<int> a, vector<int> b){
//         if(a[1] > b[1])
//             return true;
//         return false;
//     }
    
//     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
//         sort(boxTypes.begin(), boxTypes.end(), comp);
//         int units=0;
        
//         for(int i=0; i<boxTypes.size(); i++){
//             if(boxTypes[i][0] <= truckSize){
//                 units += boxTypes[i][0] * boxTypes[i][1]; //take all the boxes and add the units
//                 truckSize -= boxTypes[i][0];
//             }
//             else if(boxTypes[i][0] > truckSize){ // truckSize is less than the number of boxes
//                 units += truckSize * boxTypes[i][1];
//                 break;
//             }
//         }
        
//         return units;
//     }
    
     // Method 2 - using Priority queue(maxHeap)
     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
     
         priority_queue<pair<int,int>> pq;
         for(int i=0; i<boxTypes.size(); i++)
             pq.push({boxTypes[i][1], boxTypes[i][0]});
         
         int ans=0;
         while(pq.size()){
             if(pq.top().second < truckSize){
                 ans += pq.top().second * pq.top().first;
                 truckSize -= pq.top().second;
                 pq.pop();
             }
             else if(pq.top().second >= truckSize){
                 // when the item quantity exceeds truckSize, we multiply the difference with the
                 // quantity and break the loop
                 ans += truckSize * pq.top().first;
                 pq.pop();
                 break;
             }
             
         }
         
         return ans;         
         
     }
};