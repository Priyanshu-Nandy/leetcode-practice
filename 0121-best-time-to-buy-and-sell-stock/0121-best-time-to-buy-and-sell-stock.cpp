class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0,cost=prices[0],mini=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            cost=prices[i]-mini;
            profit=max(cost,profit);
            mini=min(mini,prices[i]);
            
        }
        return profit;
    }
};