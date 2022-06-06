class Solution {
public:
    
    void dfs(vector<vector<int>>&image, int sr, int sc, int prevColor, int newColor){
        if(sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != prevColor || image[sr][sc] == newColor)
            return;
       
        // Replace the color at x,y
        image[sr][sc] = newColor;
        // Recur for north, east, south and west
        dfs(image, sr+1, sc, prevColor, newColor); // east
        dfs(image, sr-1, sc, prevColor, newColor); // west
        dfs(image, sr, sc+1, prevColor, newColor); // north
        dfs(image, sr, sc-1, prevColor, newColor); // south
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
            int prevColor = image[sr][sc];
            if(prevColor == newColor) return image;
        
            dfs(image, sr, sc, prevColor, newColor);
            return image;
    }
};