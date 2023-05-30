//https://practice.geeksforgeeks.org/problems/possible-paths-between-2-vertices-1587115620/1

class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    set<vector<int>>ans;
    
    void dfs(int src,int d,vector<int>adj[],vector<int>&v)
    {
        v.push_back(src);
        
        if(src==d){
        ans.insert(v);
        return ;
            
        }
        
        sort(adj[src].begin(),adj[src].end());
        
        for(int child:adj[src]){
            dfs(child,d,adj,v);
            v.pop_back();
         
        }
          
    
    }
    int countPaths(int V, vector<int> adj[], int s, int d) {
        
        vector<int>v;
        
        dfs(s,d,adj,v);
        
        
        return ans.size();
    }
};
