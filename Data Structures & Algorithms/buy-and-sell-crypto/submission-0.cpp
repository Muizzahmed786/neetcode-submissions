class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyPrice = prices[0];
        int maxProfit = 0;
        for(int i=0;i<n;i++){
            buyPrice = min(buyPrice, prices[i]);
            maxProfit = max(maxProfit, prices[i] - buyPrice);
        }
        return maxProfit;
    }
};
