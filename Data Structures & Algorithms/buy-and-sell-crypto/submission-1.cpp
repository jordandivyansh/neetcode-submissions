class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();
        int buyPrice = prices[0];
        for(int i=1; i<n; i++){
            int profit = prices[i] - buyPrice;
            ans = max(ans, profit);
            buyPrice = min(buyPrice, prices[i]);
        }
        return ans;
    }
};
