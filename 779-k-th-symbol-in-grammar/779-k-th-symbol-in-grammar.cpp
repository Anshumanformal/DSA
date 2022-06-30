class Solution {
public:
    
    int find_mid_of_a_row(int n){
       return (pow(2,n-1))/2; 
    }
    
    int kthGrammar(int n, int k) {
        
        // base condition
        if(n == 1 and k == 1)   // 1st row and 1st column is zero
            return 0;
        
        int mid = find_mid_of_a_row(n);
        if(k <= mid)
            return kthGrammar(n-1,k);
        else return !kthGrammar(n-1,k-mid);
        
    }
};