// https://practice.geeksforgeeks.org/problems/word-search/1

class Solution {
public:

    bool dfs(int i,int j,int ind,vector<vector<char>>& mat,string word,
    vector<vector<bool>>&vis,vector<vector<int>>&dp)
    {   
        int n=mat.size();
        int m=mat[0].size();
        
        if(i<0 || j<0 || i>=n || j>=m) return false;
        if(vis[i][j]) return false;
         if(mat[i][j]!=word[ind]) return false;
        vis[i][j]=true;
 
        if(ind==word.length()-1) return true;
        
        return dfs(i+1,j,ind+1,mat,word,vis,dp)||dfs(i-1,j,ind+1,mat,word,vis,dp)
        ||dfs(i,j+1,ind+1,mat,word,vis,dp)||dfs(i,j-1,ind+1,mat,word,vis,dp);
        

    }
    bool isWordExist(vector<vector<char>>& mat, string word) {
        int n=mat.size();
        int m=mat[0].size();
        bool ans=false;
        vector<vector<int>>dp(n,vector<int>(m,-1));
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<m;j++)
            {
                
                if(mat[i][j]==word[0])
                ans=ans||dfs(i,j,0,mat,word,vis,dp);
                
                if(ans)
                return true;
                
            }
        }
        
        return ans;
        
    }
};
