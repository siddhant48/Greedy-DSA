// Theodore implements a new strategy game “Defense of a Kingdom”. On each level a player defends the Kingdom that is represented by a rectangular grid of cells. The player builds crossbow towers in some cells of the grid. The tower defends all the cells in the same row and the same column. No two towers share a row or a column.

// The penalty of the position is the number of cells in the largest undefended rectangle. For example, the position shown on the picture has penalty 12.

// This position has a penalty of 12.

// Help Theodore write a program that calculates the penalty of the given position.

#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int row,col;
       cin>>row>>col;
       int n;
       cin>>n;
        vector<int>x,y;
        x.push_back(0);
        y.push_back(0);
       for(int i=0;i<n;i++)
       {
           int a,b;
           cin>>a>>b;
           x.push_back(a);
           y.push_back(b);
       }
       x.push_back(row+1);
       y.push_back(col+1);
       sort(x.begin(),x.end());
       sort(y.begin(),y.end());
       int xmaxm=INT_MIN,ymaxm=INT_MIN;
       for(int i=1;i<x.size();i++)
       {
           xmaxm=max(xmaxm,x[i]-x[i-1]-1);
       }
       for(int i=1;i<y.size();i++)
       {
           ymaxm=max(ymaxm,y[i]-y[i-1]-1);
       }
       int z=xmaxm*ymaxm;
       cout<<z;
       cout<<endl;
    }
    
    return 0;
}
