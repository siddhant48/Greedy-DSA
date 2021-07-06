// You are given a string s of lower case english alphabets. You can choose any two characters in the string and
//   replace all the occurences of the first character with the second character and replace all the occurences of 
//   the second character with the first character. Your aim is to find the 
// lexicographically smallest string that can be obtained by doing this operation at most once.

 string chooseandswap(string s){
        // Code Here
        int a[26]={0};
        for(int i=0;i<s.size();i++)
        {
            a[s[i]-'a']++;
        }
        char st='*',en='*';
        int flag=0;
         for(int i=0;i<s.size();i++)
         {
            int temp=(int)(s[i]-'a');
            for(int j=0;j<temp;j++)
            {
                if(a[j]!=0)
                {
                    st=s[i];
                    en=(char)(j+'a');
                    flag=1;
                    break;
                }
            }
            a[s[i]-'a']=0;
            if(flag==1)break;
         }
         for(int i=0;i<s.size();i++)
         {
             if(s[i]==st) s[i]=en;
             else if(s[i]==en) s[i]=st;
         }
        return s;
    }
    
