class Solution {
public:
    int monotoneIncreasingDigits(int N) {
      string g=to_string(N); 
      int l=g.size();  
      int k=l;
      for(int i=l-1;i>0;i-- )
      {
        if(g[i]<g[i-1])
        {
          k=i;
          g[i-1]=g[i-1]-1;
        }
      }
      for(int i=k;i<l;i++)
      {
        g[i]='9';
      }
      return stoi(g);
    }
};
