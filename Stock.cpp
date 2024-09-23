class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int j=0;
        int mn=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            mn=min(mn,prices[i]);
            if(prices[i]-mn>j) j=prices[i]-mn;
        }
        return j;
    }
};
