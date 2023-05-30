// https://practice.geeksforgeeks.org/problems/1a4b617b70f0142a5c2b454e6fbe1b9a69ce7861/1

class Solution {
  public:
  void dfs(int src,bool cval,vector<vector<int>>& adj,vector<bool>& vis,vector<int>&temp)
  {
      vis[src]=true;
      temp.push_back(src);
      for(int child:adj[src])
      {
        
          if(vis[child]) continue;
          
          dfs(child,true,adj,vis,temp);
      }
      
    
  }
  
  bool check(vector<int>arr,vector<vector<int>>& adj)
  {
      for(int r:arr)
      {
          if(adj[r].size()!=(arr.size())-1)
          return false;
      }
      
      return true;
  }
    int findNumberOfGoodComponent(int v, vector<vector<int>>& adj) {
      
      vector<bool>vis(v+1,false);
      vector<vector<int>>comp;
      vector<int>temp;
      for(int i=1;i<=v;i++)
      {
          if(vis[i]) continue;
         
          dfs(i,true,adj,vis,temp);
          if(temp.size()!=0)
          comp.push_back(temp);
          
          temp.clear();
          
      }
      
      int c=0;
      for(int i=0;i<comp.size();i++)
      {
          if(check(comp[i],adj))
          c++;
      }
      return c;
    }
};
