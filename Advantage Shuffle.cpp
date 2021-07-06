class Solution {
public:
    vector<int> advantageCount(vector<int>& a, vector<int>& b) {
        int l=a.size();
        sort(a.begin(),a.end());
      vector<int>v;
      for(int i=0;i<l;i++)
      {
         vector<int>::iterator upper; 
        upper=upper_bound(a.begin(),a.end(),b[i]);
         if(upper!=a.end())
        {
        v.push_back(a[upper-a.begin()]);
          a.erase(upper);
          }
        
        else
        {
           v.push_back(a[0]);
          a.erase(a.begin());
        }
       
      }
      return v;
    }
};
