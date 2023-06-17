// https://www.codingninjas.com/codestudio/problems/ninja-s-training_3621003

#include<bits/stdc++.h>
int dp[100001][3];
int find(int n,vector<vector<int>> &op,int day,int i)
{
    if(day==n)return 0;
    if(dp[day][i]!=-1)return dp[day][i];
    int ans=0;
    for(int j=0;j<3;j++)
    {
        if(j!=i)
        ans=max(ans,find(n,op,day+1,j));
        
    }

    return dp[day][i]=ans+op[day][i];
}

int ninjaTraining(int n, vector<vector<int>> &op)
{
    memset(dp,-1,sizeof(dp));
    if(n==1)
    return *max_element(op[0].begin(),op[0].end());
    return max({find(n, op, 0, 0), find(n, op, 0, 1), find(n, op, 0, 2)});
}
