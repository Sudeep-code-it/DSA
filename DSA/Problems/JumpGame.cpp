// https://practice.geeksforgeeks.org/problems/jump-game/1

class Solution {
  public:
  int fun(int A[],int n,int ind)
  {
      if(ind>=n-1)
      return 1;
      
      if(ind+A[ind]>=n-1)
      return 1;
      
      int ans=0;
      
      for(int i=ind+1;i<=ind+A[ind];i++)
      {
          ans=max(0,fun(A,n,i));
          if(ans)
          return 1;
      }
      
      return ans;
  }
  
    int canReach(int A[], int n) {
        
         if(A[0]==0 && n>1) 
        return 0;
        
        int x=A[0];
        
        if(x>=n-1) 
        return 1;
        
        int ans=0;
        
        for(int i=1;i<=x;i++)
        {
            ans=max(0,fun(A,n,i));
            if(ans)
            return 1;
        }
        
        return 0;
    }
};
