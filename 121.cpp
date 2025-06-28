class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            int potentialProfit = prices[i] - minPrice;
            if (potentialProfit > maxProfit) {
                maxProfit = potentialProfit;
            }
        }
        return maxProfit;
    }
};
