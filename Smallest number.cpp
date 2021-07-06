// The task is to find the smallest number with given sum of digits as S and number of digits as D.

 string smallestNumber(int S, int D){
        // code here 
        if(9*D<S) return "-1";
        string h="";
        for(int i=0;i<D;i++)
        h+='0';
        h[0]='1';
        S-=1;
        for(int i=D-1;i>=1;i--)
        {
            int temp=S/9;
            if(temp==0) temp=S%10;
            else temp=9;
            S-=temp;
            h[i]=(char)(temp+'0');
            if(S==0) break;
        }
        if(S>8) return "-1";
        else{
            h[0]=(char)(S+1+'0');
        }
        return h;
    }
