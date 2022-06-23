class Solution {
public:
    void reverseString(vector<char>& s) {
       
        // 1st solution
        // reverse(s.begin(), s.end());
        
        // 2nd solution - using two pointer approach
        // int i = 0, j = s.size() - 1;
        // while(i < j){
        //     swap(s[i++], s[j--]); 
        // }
        
        // 3rd solution - using half iteration
        int n = s.size();
        for(int i = 0; i < n/2; i++) {
            swap(s[i], s[n - 1 - i]); // here we subtract the i'th distance which is already travelled by the loop from n-1
        }
        
    }
};