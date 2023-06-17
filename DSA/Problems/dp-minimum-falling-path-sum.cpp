// https://leetcode.com/problems/minimum-falling-path-sum

class Solution {
public:

    int find(vector<vector<int>>& mat,int r,int c,vector<vector<int>>& dp)
    {
        if(c<0 || c>=mat[0].size()) return INT_MAX;
        if(dp[r][c]!=-1000) return dp[r][c];
        if(r==mat.size()-1)return mat[r][c];
        return dp[r][c]=mat[r][c]+min({find(mat,r+1,c,dp),find(mat,r+1,c-1,dp),find(mat,r+1,c+1,dp)});
        
    }
    int minFallingPathSum(vector<vector<int>>& mat) {
        vector<vector<int>>dp(mat.size()+1,vector<int>(mat.size()+1,-1000));
        int ans=INT_MAX;
        for(int i=0;i<mat[0].size();i++)
        {
            ans=min(ans,find(mat,0,i,dp));
        }

        return ans;
    }
};
