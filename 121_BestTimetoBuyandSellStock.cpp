class Solution {
    public:
        int maxProfit(vector<int> &prices) {
            int l = prices.size();
            int minPrice = INT_MAX, Max = 0;
            for (int i = 0; i < l; i++) {
                minPrice = min(minPrice, prices[i]);
                Max = max(Max, prices[i] - minPrice);
            }
            return Max;
        }
};
