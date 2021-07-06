//Leetcode


 int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        int dp[n][2];
    //    memset(dp,1,sizeof(dp));
        for(int i=0;i<n;i++)
        {
            dp[i][0]=1;
            dp[i][1]=1;
        }
        int maxm=INT_MIN;
      //  return dp[n-1][0];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                dp[i][0]=max(dp[i][0],dp[j][1]+1);
                if(nums[i]<nums[j])
                dp[i][1]=max(dp[i][1],dp[j][0]+1);
            }
            maxm=max(maxm,max(dp[i][0],dp[i][1]));
        }
        if(maxm==INT_MIN) return 1;
        return maxm;
    }
