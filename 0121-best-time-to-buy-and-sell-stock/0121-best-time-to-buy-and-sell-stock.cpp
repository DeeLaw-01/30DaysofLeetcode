class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minvalue=prices[0];
        for(int i =1; i<prices.size();i++){
            maxprofit = max(maxprofit,prices[i]-minvalue);
            minvalue = min(minvalue,prices[i]);
        }
        return maxprofit;
    }
 
};