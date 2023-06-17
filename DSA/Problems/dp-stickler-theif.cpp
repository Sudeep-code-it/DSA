// https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int help(int ind,int arr[],int dp[])
    {
        if(ind<0)return 0;
        
        if(dp[ind]!=-1) return dp[ind];
        return dp[ind]=max(arr[ind]+help(ind-2,arr,dp),help(ind-1,arr,dp));
    }
    int FindMaxSum(int arr[], int n)
    {
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        
        return help(n-1,arr,dp);
    }
};
