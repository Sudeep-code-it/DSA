// https://leetcode.com/problems/minimum-path-sum/submissions/

class Solution {
public:
int dp[201][201];
int findmin(vector<vector<int>>& grid,int r,int c)
{
    if(r>=grid.size() || c>=grid[0].size())return INT_MAX;
    
    if(dp[r][c]!=-1) return dp[r][c];
    if(r==grid.size()-1 && c==grid[0].size()-1)return grid[r][c];

    return dp[r][c]=grid[r][c]+min(findmin(grid,r+1,c),findmin(grid,r,c+1));
}
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return findmin(grid,0,0);
    }
};
