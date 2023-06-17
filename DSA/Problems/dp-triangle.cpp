// https://leetcode.com/problems/triangle

class Solution {
public:
int dp[205][205];
int find(vector<vector<int>>& tri,int r,int c)
{
    if(r==tri.size()-1) return tri[r][c];
    if(dp[r][c]!=-1) return dp[r][c];
    return dp[r][c]=tri[r][c]+min(find(tri,r+1,c),find(tri,r+1,c+1));
}
    int minimumTotal(vector<vector<int>>& tri) {
        memset(dp,-1,sizeof(dp));
        return find(tri,0,0);
    }
};
