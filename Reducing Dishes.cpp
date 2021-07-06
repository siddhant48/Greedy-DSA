class Solution {
public:
    int maxSatisfaction(vector<int>& s) {
        int n=s.size();
        sort(s.begin(),s.end());
        int sum=0,index=-1;
        for(int i=n-1;i>=0;i--)
        {
            sum+=s[i];
            if(sum<0)
            {
               index=i+1;
                break;
            }
               
        }
     //   return index;
        if(index==n) return 0;
        if(index==-1) index=0;
        int val=0,c=1;
        for(int i=index;i<n;i++)
        {
            val+=c*s[i];
            c++;
        }
        return val;
    }
};
