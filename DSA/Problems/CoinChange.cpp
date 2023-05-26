// https://leetcode.com/problems/coin-change/


class Solution {
public:

int dp[10010];
    int fun(vector<int>& coins, int t)
    {
        if(t==0)
        return 0;
         
         if(dp[t]!=-1) return dp[t];
        int ans=INT_MAX;
        for(int i=0;i<coins.size();i++)
        {  if(t-coins[i]>=0)
           ans=min(ans+0LL,fun(coins,t-coins[i])+1LL);  //avoid overflow
        }

        return dp[t]=ans;
    }
    int coinChange(vector<int>& coins, int t) {
        
       if(t==0) return 0;

       memset(dp,-1,sizeof(dp));
       int ans=fun(coins,t);

       return ans==INT_MAX?-1:ans;
    
    }
};
