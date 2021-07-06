// Gergovia consists of one street, and every inhabitant of the city is a wine salesman. Everyone buys wine from other inhabitants of the city. Every day each inhabitant decides how much wine he wants to buy or sell. Interestingly, demand and supply is always the same, so that each inhabitant gets what he wants.

// There is one problem, however: Transporting wine from one house to another results in work. Since all wines are equally good, the inhabitants of Gergovia don't care which persons they are doing trade with, they are only interested in selling or buying a specific amount of wine.

// In this problem you are asked to reconstruct the trading during one day in Gergovia. For simplicity we will assume that the houses are built along a straight line with equal distance between adjacent houses. Transporting one bottle of wine from one house to an adjacent house results in one unit of work.



#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main()
{
    while(1)
    {
     int n;
    cin>>n;
    if(n==0) break; 
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int count=0;
    for(int i=0;i<n-1;i++)
    {
       count+=abs(a[i]);
       a[i+1]=a[i+1]+a[i];
    }
    cout<<count<<endl;
     
    }
   
    return 0;
}
