// https://leetcode.com/problems/unique-paths-ii

class Solution {
public:
 int dp[101][101];
int find(vector<vector<int>>& ob,int r,int c)
{
    if(r>=ob.size() || c>=ob[0].size())return 0;
    if(dp[r][c]!=-1)return dp[r][c];
    if(ob[r][c]==1) return dp[r][c]=0;
    if(r==ob.size()-1 && c==ob[0].size()-1)return 1;

    return dp[r][c]=find(ob,r+1,c)+find(ob,r,c+1);
  
}
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
       
        memset(dp,-1,sizeof(dp));
        return find(ob,0,0);
    }
};
