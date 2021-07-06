// Given an array A of N integers. Your task is to write a program to find the maximum value of ∑arr[i]*i, where i = 0, 1, 2,…., n – 1.
// You are allowed to rearrange the elements of the array.
// Note: Since output could be large, hence module 109+7 and then print answer.

  int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        long long int mod=1e9+7;
        long long int sum=0;
        for(int i=0;i<n;i++)
        sum=(sum%mod+i%mod*a[i]%mod)%mod;
        return sum;
    }
