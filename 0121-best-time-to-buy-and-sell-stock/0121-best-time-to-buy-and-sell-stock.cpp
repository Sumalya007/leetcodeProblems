class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0;
        int bestBuy=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                mx=max(mx,prices[i]-bestBuy);
            }
            bestBuy=min(bestBuy,prices[i]);
            
        }
       
        return mx;
    }
};