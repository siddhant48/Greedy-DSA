//Leetcode

int maxProfit(vector<int>& prices, int fee) {
    int n = prices.size();
    int dp[n]; //maximum profit
  for(int i=0;i<n;i++)
        dp[0]=0;
    int max_prof = dp[0] - prices[0] - fee;
    
    for(int i = 1; i<n; i++){
        dp[i] = max(dp[i-1], max_prof + prices[i]); //do nothing or sell
        max_prof = max(max_prof, dp[i] - prices[i] - fee);
    }
    
    return dp[n-1];
}
