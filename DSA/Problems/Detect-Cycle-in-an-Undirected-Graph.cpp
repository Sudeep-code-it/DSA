// https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

bool dfs(int src,int par,vector<int> adj[],vector<bool>&vis)
   {
       vis[src]=true;
       bool ans=false;
       for(int i=0;i<adj[src].size();i++)
       {
           if(vis[adj[src][i]] && adj[src][i]==par) continue;
           if(vis[adj[src][i]]) return true;
           
           ans=ans||dfs(adj[src][i],src,adj,vis);
       }
       
       return ans;
   }
    bool isCycle(int V, vector<int> adj[]) {
       vector<bool>vis(V,false);
       bool ans=false;
       for(int i=0;i<V;i++)
       {
           if(vis[i]) continue;
           ans=ans||dfs(i,-1,adj,vis);
       }
       
       return ans;
    }
};
