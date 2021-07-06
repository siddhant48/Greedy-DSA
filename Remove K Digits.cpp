//LEETCODE

class Solution {
public:
    string removeKdigits(string s, int k) {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty()) st.push(s[i]);
            else if(s[i]<st.top() && k>0)
            {
                while(!st.empty() && s[i]<st.top() && k!=0 )
                {
                    st.pop();
                    k--;
                }
                st.push(s[i]);
            }
            else st.push(s[i]);
        }
        if(k!=0)
        {
            while(!st.empty() && k!=0)
            {
                   st.pop();
                k--;
            }
        
        }
        string ans="";
        if(st.empty()) return "0";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int index=-1;
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]!='0') break;
            else index=i;
        }
        ans=ans.substr(index+1,ans.size()-(index+1));
        if(ans.empty()) return "0";
        return ans;
    }
};
