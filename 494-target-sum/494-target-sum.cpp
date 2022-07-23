class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum < abs(target) || (target+sum) %2 != 0) return 0;
	
        //S1 is newTarget
        int newTarget = (sum - target)/2;
        return countSubsetsWithSumTarget(nums, newTarget);
    }
    
    //Count subsets with sum S1
    int countSubsetsWithSumTarget(vector<int>& a, int target){
        int n= a.size(), w = target;
	    int t[n+1][w+1];

	//Initialization
        for(int i=0; i<w+1; i++) t[0][i] = 0;
        for(int j=0; j<n+1; j++) t[j][0] = 1;

        //Knapsack 01
        for(int i=1; i<n+1; i++){

        //j starts from 0, becuase 0s are considered valid in this problem, e.g - nums: [0,0,0,0], target: 0, ans = 16
            for(int j=0; j<w+1; j++){
                if(a[i-1] <= j){
                    t[i][j] = t[i-1][j-a[i-1]] + t[i-1][j];
                }else{
                    t[i][j] = t[i-1][j];
                }
            }
        }
        return t[n][w];
        
    }
};