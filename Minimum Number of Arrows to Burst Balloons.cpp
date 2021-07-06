//LEETCODE


class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0) return 0;
        sort(points.begin(),points.end());
        int count=1,start=INT_MIN,end=INT_MAX;
        for(int i=0;i<points.size();i++)
        {
             start=max(start,points[i][0]);
             end=min(end,points[i][1]);
            if(start>end)
            {
                count++;
                start=points[i][0];
                end=points[i][1];
            }
        }
        return count;
    }
};
