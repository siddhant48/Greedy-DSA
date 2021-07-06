class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int num_wanted, int use_limit) {
        vector<vector<int>>v;
        unordered_map<int,int>m;
        for(int i=0;i<values.size();i++)
        {
            v.push_back({values[i],labels[i]});
            m[labels[i]]=use_limit;
        }
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(num_wanted==0) break;
            if(m[v[i][1]]>0)
            {
                m[v[i][1]]--;
                sum+=v[i][0];
                num_wanted--;
            }
        }
        return sum;
    }
};
