class Solution {
public:
    
    string lcs(string X, string Y, int m, int n){
        
        // Create matrix
       int t[m+1][n+1];

    // Initialization + getting the length of the matrix
    for(int i=0; i<m+1; i++){
        for(int j=0; j<n+1; j++){
            if(i == 0 || j == 0)
                t[i][j] = 0;
            else if(X[i-1] == Y[j-1])
                t[i][j] = 1 + t[i-1][j-1];
            else
                t[i][j] = max(
                    t[i-1][j],
                    t[i][j-1]
                );
        }
    }
            
    //generate string
    string str = "";
    int i = m, j = n;
    // Run until we get empty string i.e. i == 0 || j == 0
    while(i > 0 && j > 0){
        if(X[i-1] == Y[j-1]){
            str.push_back(X[i-1]);   // pushing the character which is same in both the strings into the str string
            i--;
            j--;
        }
        else{
            if(t[i][j-1] > t[i-1][j]){
                str.push_back(Y[j-1]);
                j--;
            }
            else{
                str.push_back(X[i-1]);
                i--;
            }
        }
    }
    // pushing the remaining characters of both the strings into the lcs string
    while(i>0){
        str.push_back(X[i-1]);
        i--;
    }

    while(j>0){
        str.push_back(Y[j-1]);
        j--;
    }
    reverse(str.begin(), str.end());
    return str;   
    }
    
    string shortestCommonSupersequence(string str1, string str2) {
        
        return lcs(str1, str2, str1.length(), str2.length());
        
    }
};