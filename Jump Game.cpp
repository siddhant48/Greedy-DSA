class Solution {
public:
    bool canJump(vector<int>& a) {
        int l=a.size(),maxm=a[0];
      if(l==1) return true;
      if(a[0]==0) return false;
      for(int i=1;i<l;i++)
      {
         maxm=max(maxm-1,a[i]);
        if(maxm==0 && i!=(l-1)) return false;
      }
      return true;
    }
};
