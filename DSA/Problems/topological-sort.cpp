// https://practice.geeksforgeeks.org/problems/topological-sort/1

class Solution
{
	public:
    void dfs(int src,vector<bool>&vis,stack<int>&st,vector<int> adj[])
    {
        vis[src]=true;
        
        for(int child:adj[src])
        {
            if(!vis[child])
            dfs(child,vis,st,adj);
        }
        
        st.push(src);
    }
	vector<int> topoSort(int v, vector<int> adj[]) 
	{
	    vector<bool>vis(v,false);
	    stack<int>st;
	    
	    for(int i=0;i<v;i++)
	    {
	        if(!vis[i])
	        dfs(i,vis,st,adj);
	    }
	    
	    vector<int>ans;
	    
	    while(!st.empty())
	    {
	        ans.push_back(st.top());
	        st.pop();
	    }
	    
	    return ans;
	}
};
