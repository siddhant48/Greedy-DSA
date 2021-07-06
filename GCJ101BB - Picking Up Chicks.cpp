// A flock of chickens are running east along a straight, narrow road. Each one is running with its own constant speed. Whenever a chick catches
// up to the one in front of it, it has to slow down and follow at the speed of the other chick. You are in a mobile crane behind the flock,
// chasing the chicks towards the barn at the end of the road. The arm of the crane allows you to pick up any chick momentarily, let 
// the chick behind it pass underneath and place the picked up chick back down. This operation takes no time and can only be performed on 
// a pair of chicks that are immediately next to each other, even if 3 or more chicks are in a row, one after the other.

// Given the initial locations (Xi) at time 0 and natural speeds (Vi) of the chicks, as well as the location of the barn (B), what is 
// the minimum number of swaps you need to perform with your crane in order to have at least K of the N chicks arrive at the barn no later than time T?

// You may think of the chicks as points moving along a line. Even if 3 or more chicks are at the same location, next to each other, 
// picking up one of them will only let one of the other two pass through. Any swap is instantaneous, which means that you may perform 
// multiple swaps at the same time, but each one will count as a separate swap.

#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    int t;
    cin>>t;
   for(int z=0;z<t;z++)
   {
      int n,k,b,t;
      cin>>n>>k>>b>>t;
      int x[n],v[n];
      for(int i=0;i<n;i++)
      cin>>x[i];
      for(int j=0;j<n;j++)
      cin>>v[j];
      int count=0,swap=0,notPos=0;
      for(int i=n-1;i>=0;i--)
      {
          int distCan=v[i]*t;
          int distShould=b-x[i];
          if(distCan>=distShould)
          {
              count++;
               swap+=notPos;
          }
          else{
              notPos++;
          }
          if(count==k)
          break;
      }
      cout<<"Case #"<<z+1<<": ";
      if(count==k)
      cout<<swap;
      else cout<<"IMPOSSIBLE";
       cout<<endl;
    }
    
    return 0;
}
