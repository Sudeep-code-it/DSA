// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution
{
    public:
    int dp[1001][1001];
    int fun(int *wt,int *val,int n,int w)
    {
        // cout<<n<<" "<<w<<endl;
        if(n<0)
        return 0;
        
        if(dp[n][w]!=-1) return dp[n][w];
        int ans=0;
        ans=max(ans,fun(wt,val,n-1,w)); //without
        if(w-wt[n]>-1)
        ans=max(ans,fun(wt,val,n-1,w-wt[n])+val[n]); //with
        
        return dp[n][w]=ans;
    }
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int w, int wt[], int val[], int n) 
    { 
        memset(dp,-1,sizeof(dp));
       return fun(wt,val,n-1,w);
       
    }
};
