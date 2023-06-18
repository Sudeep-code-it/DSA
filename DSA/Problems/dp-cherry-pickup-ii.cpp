// https://leetcode.com/problems/cherry-pickup-ii/

class Solution {
public:

int find(vector<vector<int>>& grid,int r,int c1,int c2,vector<vector<vector<int>>>&dp)
{
    if(c1<0 || c2<0 || c1>=grid[0].size() || c2>=grid[0].size()) return -1e8;
    if(r==grid.size()-1)
    {
        if(c1==c2)return grid[r][c1];
        else return grid[r][c1]+grid[r][c2];
    }
    if(dp[r][c1][c2]!=-1) return dp[r][c1][c2];
     int ans=-1e8;
for(int i=-1;i<2;i++)
for(int j=-1;j<2;j++)
{
    int val=0;
    if(c1==c2) val= grid[r][c1];
    else val= grid[r][c1]+grid[r][c2];

    val+=find(grid,r+1,c1+i,c2+j,dp);
    ans=max(ans,val);
}

return dp[r][c1][c2]=ans;

}
    int cherryPickup(vector<vector<int>>& grid) {
       vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(grid[0].size(),-1)));
        return find(grid,0,0,grid[0].size()-1,dp);
    }
};
