// Given an array of integers of size N and a number K., Your must modify array arr[] exactly K number of times. 
//   Here modify array means in each operation you can replace any array element either arr[i] by -arr[i] or -arr[i] by arr[i]. You need to perform 
// this operation in such a way that after K operations, the sum of the array must be maximum.

long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        sort(a,a+n);
        long long int i=-1;
        long long int sum=0;
        while(i+1<n && a[i+1]<=0 &&  k>0)
        {
            a[i+1]=-a[i+1];
            i++;
            k--;
        }
       if(k!=0)
       {
           if(i==-1) i=0;
           if(k%2!=0)
           a[i]=-a[i];
       }
       for(int i=0;i<n;i++)
       sum+=a[i];
       return sum;
    }
