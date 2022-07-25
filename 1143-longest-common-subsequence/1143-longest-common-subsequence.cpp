class Solution {
public:
       // int t[1001][1001];
//     Tabular solution
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
    
//     Recursive + Memoization solution
//     int lcs(string X, string Y, int m, int n){

//         //base case
//         if(m == 0 || n == 0)
//             return 0;

//         if(t[m][n] != -1)
//             return t[m][n];

//         // when last character is same for both subsequences
//         if(X[m-1] == Y[n-1])
//             // adding 1 because this option is selected. 1 is for selection. When we haven't selected, we are taking max of the values.
//             return t[m][n] = 1 + lcs(X,Y,m-1,n-1);

//         // when last characters aren't same
//         else if(X[m-1] != Y[n-1])
//             // taking max as we have to get the maximum/longest common subsequence
//             return t[m][n] = max(lcs(X,Y,m,n-1), lcs(X,Y,m-1,n));

//         return 0;
//     }
    
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.size();
        int n = text2.size();
        // memset(t,-1,sizeof(t));

        return lcs(text1, text2, m, n);
    }
};