// A board of length m and width n is given, we need to break this board into m*n squares such that cost 
// of breaking is minimum. cutting cost for each edge will be given for the board. 
//   In short, we need to choose such a sequence of cutting such that cost is minimized. 


#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n-1];
        int b[m-1];
        for(int i=0;i<n-1;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m-1;i++)
        {
            cin>>b[i];
        }
        int h=1,v=1;
        int ans=0;
        sort(a,a+n-1);
        sort(b,b+m-1);
        int i=n-2,j=m-2;
        while(i>=0 && j>=0)
        {
            if(a[i]>=b[j])
            {
                ans+=a[i]*v;
                h++;
                i--;
            }
            else{
                ans+=b[j]*h;
                v++;
                j--;
            }
        }
        while(i>=0)
        {
            ans+=a[i]*v;
            i--;
        }
        while(j>=0)
        {
            ans+=b[j]*h;
            j--;
        }
        cout<<ans;
        cout<<endl;
    }
    return 0;
}
