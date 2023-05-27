// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1

class Solution{   
public:
    int fun(vector<int>&arr,int sum,int ind,vector<vector<int>>&dp)
    {
        if(sum<0)
        return 0;
        
        if(sum==0)
        return 1;
        
        if(ind<0)
        return 0;
        
        if(dp[ind][sum]!=-1) return dp[ind][sum];
        
        return dp[ind][sum]=(fun(arr,sum,ind-1,dp)||fun(arr,sum-arr[ind],ind-1,dp));
    }
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        vector<vector<int>> dp(n+1, vector<int>(sum+1, -1));
        return fun(arr,sum,arr.size()-1,dp);
    }
};
