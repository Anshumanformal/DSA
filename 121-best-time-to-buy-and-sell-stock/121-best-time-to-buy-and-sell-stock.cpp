class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int min_buy_cost = prices[0];
        int max_profit = 0;
        
        for(int i=0; i<prices.size(); i++){
            min_buy_cost = min(min_buy_cost, prices[i]);
            max_profit = max(max_profit, prices[i] - min_buy_cost);
        }
        return max_profit;
        
        
    }
};