// https://practice.geeksforgeeks.org/problems/find-whether-path-exist5238/1

class Solution
{
    public:
    bool search(int n,int i,int j,vector<vector<int>>& grid,vector<vector<bool>>& vis)
    {
        if(i<0 || j<0 || i>=n || j>=n) return false;
         if(vis[i][j]==false){
             
         vis[i][j]=true;
        if(grid[i][j]==0) return false;
        if(grid[i][j]==2) return true;
        
        return search(n,i-1,j,grid,vis)||search(n,i+1,j,grid,vis)
        ||search(n,i,j-1,grid,vis)||search(n,i,j+1,grid,vis);
    }
        
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
    int n=grid.size();
    vector<vector<bool>>vis(n, vector<bool>(n, false));
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
         {
             if(grid[i][j]==1){
             return search(n,i,j,grid,vis);
             }
         }
     }
    }
};
