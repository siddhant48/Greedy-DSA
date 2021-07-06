//Leetcode

class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int n=colsum.size();
        vector<vector<int>>v(2,vector<int>(n,0));
        vector<vector<int>>k;
        for(int i=0;i<n;i++)
        {
        
            if(colsum[i]==1)
            {
                if(upper>=lower && upper!=0)
                {
                    v[0][i]=1;
                    v[1][i]=0;
                    upper--;
                }
                else if(lower>upper && lower!=0)
                {
                    v[0][i]=0;
                    v[1][i]=1;
                    lower--;
                }
                else
                return k;
            }
            else if(colsum[i]==2)
            {
                if(upper!=0 && lower!=0)
                {
                    v[0][i]=1;
                    v[1][i]=1;
                    upper--;
                    lower--;
                }
                
            }
          
        }
        if(upper==0 && lower==0)
        return v;
        return k;
    }
};

