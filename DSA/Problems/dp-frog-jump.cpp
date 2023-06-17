// https://www.codingninjas.com/codestudio/problems/frog-jump_3621012

#include <bits/stdc++.h>
int help(int n, vector<int> &h,int dp[]) {
  if (n == 1)
    return 0;
  
  if(dp[n]!=-1) return dp[n];
  int one = INT_MAX;
  int two = INT_MAX;
  if (n - 1 >= 1)
    one = abs(h[n - 1] - h[n - 2]) + help(n - 1, h,dp);
  if (n - 2 >= 1)
    two = abs(h[n - 1] - h[n - 3]) + help(n - 2, h,dp);

  return dp[n]=min(one, two);

}
int frogJump(int n, vector<int> &h)
{
   int dp[n+1];
   memset(dp,-1,sizeof(dp));

   return help(n,h,dp);
}
