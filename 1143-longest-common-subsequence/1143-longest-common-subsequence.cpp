class Solution {
public:
    
    int lcs(string X, string Y, int m, int n){
        // Create matrix
        int t[m+1][n+1];

        // Initialization
        for(int i=0; i<m+1; i++)
            t[i][0] = 0;
        for(int j=0; j<n+1; j++)
            t[0][j] = 0;

        // Filling the matrix
        for(int i=1; i<m+1; i++){
            for(int j=1; j<n+1; j++){
                if(X[i-1] == Y[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                else
                    t[i][j] = max(t[i][j-1], t[i-1][j]);
            }
        }
        return t[m][n];
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        
        return lcs(text1, text2, m, n);
    }
};