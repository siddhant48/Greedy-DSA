//Leetcode

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int>m1;
        int n=nums.size();
        for(int i=0;i<n;i++)
            m1[nums[i]]++;
        unordered_map<int,int>m2;
        for(int i=0;i<n;i++)
        {
            if(m1[nums[i]]<=0) 
                continue;
            m1[nums[i]]--;
            if(m2.find(nums[i]-1)!=m2.end() && m2[nums[i]-1]>0)
            {
                m2[nums[i]-1]--;
                 m2[nums[i]]++;
            }
            else if(m1.find(nums[i]+1)!=m1.end()&& m1[nums[i]+1]>0 && m1.find(nums[i]+2)!=m1.end()&& m1[nums[i]+2]>0)
            {
                m1[nums[i]+1]--;
                m1[nums[i]+2]--;
                m2[nums[i]+2]++;
            }
            else return false;
        }
        return true;
    }
};
