class Solution {
public:
    int canCompleteCircuit(vector<int>& g, vector<int>& c) {
        int l=g.size();
         //if(l==1) return 0;
        int a[l];
      for(int i=0;i<l;i++)
      {
        a[i]=g[i]-c[i];
      }
      for(int i=0;i<l;i++)
      {
        int sum=0;
        int flag=0;
        if(a[i]>=0)
        {
          for(int j=i;j<l;j++)
          {
            sum+=a[j];
            if(sum<0)
            {
              flag=1;
              break;
            }
          }
          if(flag==0 && i!=0)
          {
            for(int j=0;j<i;j++)
            {
              sum+=a[j];
              if(sum<0)
              {
                flag=1;
                break;
              }
            }
          }
           if(flag==0) return i;
        }
       
      }
      return -1;
    }
};
