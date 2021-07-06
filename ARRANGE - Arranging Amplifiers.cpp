// spoj

#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       cin>>a[i];
       sort(a,a+n);
       int i=0;
     for(i=0;i<n;i++)
       {
           if(a[i]==1)
           cout<<1<<" ";
           else break;
       }
       if(a[n-2]==2 && a[n-1]==3)
       cout<<2<<" "<<3;
       else{
           for(int k=n-1;k>=i;k--)
           cout<<a[k]<<" ";
       }
       cout<<endl;
    }
    
    return 0;
}
