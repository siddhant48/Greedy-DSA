// Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms
// required for the railway station so that no train is kept waiting.
// Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never 
// be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given
// instance of time, same platform can not be used for both departure of
// a train and arrival of another train. In such cases, we need different platforms.

 int findPlatform(int arr[], int dep[], int n)
    {
        
        /// The train that will come will the increase the need of platform
        // and that will go will decrease the need of platform
        // if arrive increase the count and if decrease reduce the count after sorting 
        sort(arr,arr+n);
        sort(dep,dep+n);
        int local=0,global=0;
        int i=0,j=0;
      while(i<n && j<n)
      {
          if(arr[i]<=dep[j])
          {
              local++;
              i++;
              global=max(global,local);
          }
          else{
              local--;
              j++;
          }
      }
      return global;
    }
