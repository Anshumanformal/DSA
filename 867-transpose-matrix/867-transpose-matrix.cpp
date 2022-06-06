class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int M = matrix.size(), N = matrix[0].size();
        
        vector<vector<int>> transpose_matrix(N,vector<int>(M,0));
        
        for(int j=0; j<N; j++)
            for(int i=0; i<M; i++)
                transpose_matrix[j][i] = matrix[i][j];
        
        return transpose_matrix;
    }
};