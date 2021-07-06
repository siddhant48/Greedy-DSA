// Given a set of N jobs where each job i has a deadline and profit associated to it. Each job takes 1
//   unit of time to complete and only one job can be scheduled at a time. We earn the profit if and only if 
//     the job is completed by its deadline. The task is to find the maximum profit and the number of jobs done.

// Note: Jobs will be given in the form (Job id, Deadline, Profit) associated to that Job.

 static bool comp(Job p1,Job p2)
  {
      return p1.profit>p2.profit;
  }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        sort(arr,arr+n,comp);
        int count=0,val=0;
        int slot[n];
        for(int i=0;i<n;i++) slot[i]=false;
        unordered_set<int>s;
        for(int i=0;i<n;i++)
        {
             for (int j=min(n, arr[i].dead)-1; j>=0; j--) 
       { 
          // Free slot found 
          if (slot[j]==false) 
          { 
            // result[j] = i;  // Add this job to result 
             slot[j] = true; // Make this slot occupied 
             val=val+arr[i].profit;
             count++;
             break; 
          } 
       } 
            
        }
        return {count,val};
    } 
