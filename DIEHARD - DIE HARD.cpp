#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int h,a;
       cin>>h>>a;
       int t=0;
       while(1)
       {
           if(t%2==0)
           {
               h+=3;
               a+=2;
           }
           else{
               if( a>10)
               {
                   h-=5;
                   a-=10;
               }
               else{
                   h-=20;
                   a+=5;
               }
           }
           if(h>0 && a>0) t++;
           else break;
       }
       cout<<t;
        cout<<endl;
    }
    return 0;
}
