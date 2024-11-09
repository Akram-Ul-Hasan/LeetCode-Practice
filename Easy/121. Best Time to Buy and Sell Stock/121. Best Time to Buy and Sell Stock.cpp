class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];
        for (auto& price: prices) {
            if (price > minPrice) {
                maxProfit = max(maxProfit, price - minPrice);
            } else {
                minPrice = price;
            }
        }
        return maxProfit;
    }
};