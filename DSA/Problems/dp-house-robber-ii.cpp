// https://leetcode.com/problems/house-robber-ii

class Solution {
public:
  int dp[102][2];
int help(int i,vector<int>& nums,int f)
{
    if(i<0) return 0;

      if(dp[i][f]!=-1) return dp[i][f];
     if(i==0 && f)return dp[i][f]=0;
     if(i==0 && !f)return dp[i][f]=nums[i];  
     if(i==nums.size()-1)
    return dp[i][f]=max(nums[i]+help(i-2,nums,1),help(i-1,nums,0));
    else
    return dp[i][f]=max(nums[i]+help(i-2,nums,f),help(i-1,nums,f));
}
    int rob(vector<int>& nums) {
      
        memset(dp,-1,sizeof(dp));

        return help(nums.size()-1,nums,0);
    }
};
