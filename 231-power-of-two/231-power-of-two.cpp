class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        // Recursive solution
        if(!n) return false;
        if(n == 1) return true;
        return n % 2 == 0 and isPowerOfTwo(n / 2);
        
        // Iterative solution
        if(n == 0) return 0;
        while(n % 2 == 0) 
            n /= 2;
        return n == 1;
    }
};