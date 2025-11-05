class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy1 = prices[0];
        int minbuy2 = prices[0];
        int max1 = 0;
        int max2 =0;
        for(auto price: prices){
            minbuy1 = min(minbuy1, price);
            max1 = max(max1, price - minbuy1);
            minbuy2 = min(minbuy2, price - max1);
            max2 = max(max2, price - minbuy2);
        }
        return max2;
        
    }
};