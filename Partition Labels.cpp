 vector<int> partitionLabels(string S) {
        int a[26];
        for(int i=0;i<S.size();i++)
            a[S[i]-'a']=i;
        int start=0;
        int maxm=INT_MIN;
        vector<int>ans;
        for(int i=0;i<S.size();i++)
        {
            maxm=max(maxm,a[S[i]-'a']);
            if(i==maxm)
            {
                ans.push_back(i-start+1);
                start=i+1;
                maxm=INT_MIN;
            }
        }
        return ans;
    }
