class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int> v;
        int r = mat.size();
        int c = mat[0].size();
        int top=0;
        int bottom=r-1;
        int left=0;
        int right=c-1;
        
        while(top <= bottom && left <= right){
            for(int i=left; i<=right; i++)
                v.push_back(mat[top][i]);
            top++;
            
            for(int i=top; i<=bottom; i++)
                v.push_back(mat[i][right]);
            right--;
            
            if(top<=bottom){
                for(int i=right; i>=left; i--)
                    v.push_back(mat[bottom][i]);
               bottom--;
            }
            if(left<=right){
                for(int i=bottom; i>=top; i--)
                    v.push_back(mat[i][left]);
                    left++;
            }
        }
        return v;
        
    }
};