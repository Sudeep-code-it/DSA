// https://practice.geeksforgeeks.org/problems/party-in-town3951/1

class Solution{
public:
      int dfs(int n,int src,int curd,vector<vector<int>> &adj,vector<bool>&vis)
      {
          vis[src]=true;
          int ans=curd;
          for(int i:adj[src])
          {
             
              if(vis[i]) continue;
              ans=max(ans,dfs(n,i,curd+1,adj,vis));
              
          }
          
          return ans;
      }
    int partyHouse(int n, vector<vector<int>> &adj){
        
       
        int ans=n;
        for(int i=1;i<=n;i++)
        {
            vector<bool>vis(n+1,false);
            
            ans=min(ans,dfs(n,i,0,adj,vis));
        }
       
     
        return ans;
        
    }
};
