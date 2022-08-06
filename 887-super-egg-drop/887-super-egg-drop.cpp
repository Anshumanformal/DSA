class Solution {
public:
    
    int t[101][10001];
    int eggDrop(int e, int f){

        if(f == 0 || f == 1)
            return f;
        if(e == 1)
            return f;

        if(t[e][f] != -1)
            return t[e][f];

        int ans=INT32_MAX;
        int l=1,r=f;
        while(l<=r)
        {
            int mid=(l+r)/2;
            int left = eggDrop(e-1,mid-1);
            int right = eggDrop(e,f-mid);
            int temp = 1 + max(left,right);
            if(left<right)
                l=mid+1;
            else
                r=mid-1;
            
            ans = min(ans,temp);
        }
        return t[e][f] = ans;
    }
    
    int superEggDrop(int k, int n) {
        int eggs = k;
        int floors = n;
        
        memset(t,-1, sizeof(t));
        return eggDrop(eggs,floors);
    }
};