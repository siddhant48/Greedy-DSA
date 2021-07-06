class Solution {
public:
    static bool comp(vector<int>a,vector<int>b)
    {
        return (a[1]-a[0])<(b[1]-b[0]);
    }
    int minimumEffort(vector<vector<int>>& t) {
       
        sort(t.begin(),t.end(), [](vector<int> &t1, vector<int> &t2) 
         { return t1[1] - t1[0] > t2[1] - t2[0]; });
        int val=t[0][1];
        int rem=t[0][1]-t[0][0];
        for(int i=1;i<t.size();i++)
        {
            if(t[i][1]>=rem)
            {
               val+=t[i][1]-rem;
               rem=t[i][1]-t[i][0];
            }
            else
                rem-=t[i][0];
        }
        return val;
    }
};
