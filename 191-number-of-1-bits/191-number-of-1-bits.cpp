class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            // performing bitwise and n becomes 0 when all bits are set to 0
            n = n & (n-1);
            count += 1;
        }
        return count;
    }
};