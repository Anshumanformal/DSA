class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        int sum = amount;
        long long int t[n+1][sum+1];

        //initialization
        for (int i=0; i<n+1; i++)
            t[i][0] = 0;
        
        for (int j=1; j<sum+1; j++)
            t[0][j] = INT_MAX;


        // filling the matrix
        for(int i=1; i<n+1; i++){
            for(int j=1; j<sum+1; j++){
                if(coins[i-1] <= j)
                   t[i][j] = min(1 + t[i][j-coins[i-1]] , t[i-1][j]);
                else
                    t[i][j] = t[i-1][j];
            }
        }
        if(t[n][sum] == INT_MAX)
            return -1;
        return t[n][sum];
        
    }
};