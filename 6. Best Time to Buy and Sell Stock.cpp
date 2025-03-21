// 121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_so_far_idx = 0, ans = 0;
        for(int i=1;i<prices.size();i++){
            ans=max(ans, prices[i]-prices[min_so_far_idx]);
            if(prices[i]<=prices[min_so_far_idx]){
                min_so_far_idx = i;
            }
        }
        return ans;
        // O(n) Time, O(1) Space
    }
};
