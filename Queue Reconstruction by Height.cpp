//Leetcode

 static bool comp(vector<int>&a,vector<int>&b)
  {
    if(a[0]==b[0])
         return a[1]<b[1];
    return a[0]>b[0];
    
  }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),comp);
      vector<vector<int>>v;
      for(int i=0;i<p.size();i++)
      {
        v.insert(v.begin()+p[i][1],p[i]);
      }
      return v;
    }
