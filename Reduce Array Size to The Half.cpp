class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>m;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        
        vector<int>v;
        for(auto it=m.begin();it!=m.end();it++)
        {
            v.push_back(it->second);
        }
       
        sort(v.begin(),v.end());
        long long int count=0,l=n/2,ans=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(count>=l)
            {
                break;
            }
            count+=v[i];
            ans++;
        } //return count;
        return ans;
    }
};
