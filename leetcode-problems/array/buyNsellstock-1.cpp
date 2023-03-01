class Solution {
public:
    int maxProfit(vector<int>& prices) {
           int mini=INT_MAX;
       int profit=0;
       int profittoday=0;
       for(int i=0;i<prices.size();i++){
           if(prices[i]<mini){
               mini=prices[i];
               }
                profittoday=prices[i]-mini;
                if(profittoday>profit)
       profit=profittoday;
       }
       return profit;
    }
};
