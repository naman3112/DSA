class Solution {
public:    
    int maxProfit(vector<int>& prices) {
        int minPriceSofar = prices[0];
        int ansProfit = 0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>minPriceSofar){
                ansProfit = max(ansProfit, prices[i]-minPriceSofar);
            }else{
                minPriceSofar = prices[i];
            }
        }
        return ansProfit;
    }

};
