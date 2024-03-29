class Solution {
public:
    int trap(vector<int>& arr) {
       
       int n = arr.size();
       long long res = 0;
       int lMax = 0, rMax = 0, l = 0, r = n-1;
        while(l <= r) {
            if(arr[l] <= arr[r]) {
                if(arr[l] > lMax) lMax = arr[l];
                else res += lMax - arr[l];
                l++;
            } else {
                if(arr[r] > rMax) rMax = arr[r];
                else res += rMax - arr[r];
                r--;
            }
        }
        return res;
    }
};