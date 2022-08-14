class StockSpanner {
public:
    
    stack<pair<int,int>> sk;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ct=1;
        while(sk.size() && sk.top().first <= price){
            ct += sk.top().second;
            sk.pop();
        }
        sk.push({price,ct});
        return ct;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */