//Leetocode

 string removeDuplicateLetters(string s) {
        int last_index[26],n=s.size();
        for(int i=0;i<n;i++)
            last_index[s[i]-'a']=i;
        bool a[26]={false};
        stack<char>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty()) {
                st.push(s[i]);
                a[s[i]-'a']=true;
            }
            else if(a[s[i]-'a']==false && s[i]>st.top())
            {
                st.push(s[i]);
                a[s[i]-'a']=true;
            }
            else if(a[s[i]-'a']==false && s[i]<st.top())
            {
                while(!st.empty() && s[i]<st.top() && last_index[st.top()-'a']>i)
                {
                    
                    a[st.top()-'a']=false;
                    st.pop();
                }
                st.push(s[i]);
                a[s[i]-'a']=true;
            }
        }
        string ans="";
        while(!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
