// Given weights and values of N items, we need to put these items in a knapsack of capacity W to get the maximum total value in the knapsack.
// Note: Unlike 0/1 knapsack, you are allowed to break the item. 

bool comp(struct Item a, struct Item b)
{
    double d1=(double)a.value/a.weight;
    double d2=(double)b.value/b.weight;
    return d1>d2;
}
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Your code here
    sort(arr,arr+n,comp);
    double sum=0;
    for(int i=0;i<n;i++)
    {
        
        if(W>=arr[i].weight)
        {
            sum+=arr[i].value;
            W-=arr[i].weight;
        }
        else if(W>0 && W<arr[i].weight)
        {
           
            double f=(double)arr[i].value/(double)arr[i].weight;
            sum+=W*f;
            W=0;
        }
        if(W==0) break;
        
    }
   // return v[1][0];
    return sum;
}
