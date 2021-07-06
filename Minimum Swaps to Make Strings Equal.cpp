class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int misf=0,miss=0;
      for(int i=0;i<s1.size();i++)
      {
        if(s1[i]=='x' && s2[i]=='y')
          misf++;
        else if(s1[i]=='y' && s2[i]=='x')
          miss++;
      }
      if((misf+miss)%2==1) return -1;
      else return ceil((double)misf/2)+ceil((double)miss/2);
    }
};
