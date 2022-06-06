// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
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
        // Code here 
           int prevColor = image[sr][sc];
           if(prevColor == newColor) return image;
        
           dfs(image, sr, sc, prevColor, newColor);
           return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends