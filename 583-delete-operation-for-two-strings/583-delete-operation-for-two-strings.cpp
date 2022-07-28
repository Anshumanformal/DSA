class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int m = word1.size();
        int n = word2.size();
        
        // rows -> 3+1=4, columns -> 3+1=4
        //creating the dp matrix;
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        
        // filling the dp matrix
        for(int i=1; i<m+1; i++){
            for(int j=1; j<n+1; j++){
                if(word1[i-1] == word2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]); 
            }
        }
        
        // int number_of_deletions = m - lcs_length; // m - dp[m][n]
        // int number_of_insertions = n - lcs_length;// n - dp[m][n]
        return m - dp[m][n] + n - dp[m][n]; // number of insertions + number of deletions
    }
};