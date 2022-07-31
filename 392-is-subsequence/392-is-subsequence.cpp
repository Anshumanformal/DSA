class Solution {
public:
    
    // Tabular solution 
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
    
    bool isSubsequence(string s, string t) {
        int lcs_length = lcs(s,t,s.size(),t.size());
        if(lcs_length == s.size())
            return true;
        else
            return false;
    }
};