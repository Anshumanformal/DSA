class Solution {
public:
// Function to check if a subset exists whose sum is equal to given sum.
    bool subsetSum(vector<int>& nums, int n, int sum){

         bool dp[n+1][sum+1];
            for(int i=0;i<=n;i++){
                for(int j=0;j<=sum;j++){
                    if(i==0) dp[i][j]=false;
                    if(j==0) dp[i][j]=true;
                }
            }

            for(int i=1;i<=n;i++){
                for(int j=1;j<=sum;j++){
                    if(nums[i-1]<=j) dp[i][j]=dp[i-1][j-nums[i-1]]||dp[i-1][j];
                    else dp[i][j]=dp[i-1][j];
                }
            }
            return dp[n][sum];
    }
    
    bool canPartition(vector<int>& nums) {
        
            // An array can only have equal partition subset if the sum of numbers is even.
        // For eg. - if the sum is 22, then both subsets will have sum = 11. However, we only need to find one subset.
        // The rest other subset is automatically verified.

        int sum = 0;
        int n = nums.size();
        // Getting the sum of all numbers.
        for(int i=0; i<n; i++)
            sum += nums[i];

        if(sum % 2 != 0)
            return false;
        else
            // we need to check whether a subset with sum = 11 exists
            return subsetSum(nums,n,sum/2);
    }
};