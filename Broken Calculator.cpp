//Leetcode

class Solution {
public:
    int brokenCalc(int x, int y) {
        int count=0,j;
      while(y!=x)
      {
        if(y%2==0 && y>x)
        {
          y=y/2;
          count++;
        }
        else if(y%2==1 && y>x)
        {
          y=y+1;
          count++;
        }
        else if(y<x)
        {
          while(y!=x)
          {
            count++;
            y++;
          }
        }
        
      }
      return count;
    }
};
