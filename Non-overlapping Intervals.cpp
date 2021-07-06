//Leetcode

int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return 0;
     sort(intervals.begin(),intervals.end());
        int count=0,start=intervals[0][0],end=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<end)
            {
                count++;     
                end=min(end,intervals[i][1]);
            }
            else if(intervals[i][0]>=end){
              
                end=intervals[i][1];
            }
        }
        return count;
    }
