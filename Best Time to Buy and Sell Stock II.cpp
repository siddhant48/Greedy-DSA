class Solution {
public:
    int maxProfit(vector<int>& prices) {
       
        int val=0;
        for(int i =1;i<prices.size();i++)
            if(prices[i]>prices[i-1])
                val = val + prices[i]-prices[i-1];
        return val;
    }
};
