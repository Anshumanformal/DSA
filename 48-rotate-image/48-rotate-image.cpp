class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int size = matrix.size();
        
        for(int i=0; i<size; i++){
            for(int j=0; j<i; j++){
                swap(matrix[i][j], matrix[j][i]); // transpose of the matrix
            }
        }
        
        for(int i=0; i<size; i++)
            reverse(matrix[i].begin(), matrix[i].end());    // reversing every row to get the result
        
        // swap function - It applies on the given values only. It only swaps the supplied values.
        // reverse function - It applies on a range and reverses the complete range
    }
};