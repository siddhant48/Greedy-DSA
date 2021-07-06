 int minAddToMakeValid(string s) {
    int count=0;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(') st.push('(');
            else if(s[i]==')' && !st.empty()) st.pop();
            else if(s[i]==')' && st.empty())
            {
                count++;
            }
        }
        return count+st.size();
    }
