// https://leetcode.com/problems/all-paths-from-source-to-target/


class Solution {
public:
void fun(vector<vector<int>>& g, vector<int> v,int x,vector<vector<int>>& ans)
{
    if(x==g.size()-1)
    {
        v.push_back(x);
        ans.push_back(v);
        v.pop_back();
        return ;
    }
    if(g[x].size()==0) return ;
    
    v.push_back(x);
    for(int i=0;i<g[x].size();i++)
    {
        fun(g,v,g[x][i],ans);
    }
    v.pop_back();
  
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& g) {
        vector<vector<int>>ans;
        vector<int>v;
        v.push_back(0);

        for(int i=0;i<g[0].size();i++)
        {
            fun(g,v,g[0][i],ans);
        }

        return ans;
    }
};
