class Solution {
public:
    
    int coinChange(vector<int>& coin, int sum){
        int n = coin.size();
        // create matrix
        long long int t[n+1][sum+1];

        //initialization
        for(int i=0; i<n+1; i++)
            t[i][0] = 1;

        for(int j=1; j<sum+1; j++)
            t[0][j] = 0;

        // filling the matrix
        for(int i=1; i<n+1; i++){
            for(int j=1; j<sum+1; j++){
                if(coin[i-1] <= j)
                    t[i][j] = t[i][j-coin[i-1]] + t[i-1][j]; 
                else
                    t[i][j] = t[i-1][j];
            }
        }

        if(t[n][sum] == INT_MAX-1)
            return -1;

        return t[n][sum];
    }
    
    int change(int amount, vector<int>& coins) {
        return coinChange(coins, amount);
    }
};