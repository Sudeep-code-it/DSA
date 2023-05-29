// https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

void call(int V, int source,vector<int>adj[],vector<int>&visited,vector<int>&ans){
        ans.push_back(source);
        visited[source]= true;
        for(int i=0; i<adj[source].size();i++){
            if(visited[adj[source][i]]==false)
            call(V,adj[source][i],adj,visited,ans);
        }
    }
  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
          vector<int>visited(V,0);
        vector<int>ans;
        call(V,0,adj,visited,ans);
        return ans;
    }
