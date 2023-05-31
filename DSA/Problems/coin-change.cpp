// https://practice.geeksforgeeks.org/problems/coin-change2448/1

class Solution {
  public:
  long long int dp[1000][1000];
  long long int find(int sum,int ind,int n,int coins[])
  {
     
       
      if(sum==0) return 1;
      if(sum<0 || ind>=n) return 0;
      
      if(dp[sum][ind]!=-1) return dp[sum][ind]; 
      long long int ans=0;
     
       ans+=find(sum-coins[ind],ind,n,coins);
       ans+=find(sum,ind+1,n,coins);

      return dp[sum][ind]=ans;
  }
    long long int count(int coins[], int n, int sum) {
        
        memset(dp,-1,sizeof(dp));
       return find(sum,0,n,coins);
    }
};
