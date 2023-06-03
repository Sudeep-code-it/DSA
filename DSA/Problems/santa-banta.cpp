// https://practice.geeksforgeeks.org/problems/santa-banta2814/0

class Solution{
public:
   vector<int>prime;
    void precompute(){
      
        vector<bool>isprime(1e6+1,true);
        isprime[0]=false;
        isprime[1]=false;
        for(int i=2;i<1e6+1;i++)
        {
            if(isprime[i]==true)
            {
                prime.push_back(i);
                int j=2*i;
                while(j<1e6+1)
                {
                    isprime[j]=false;
                    j=j+i;
                }
            }
        }
    }
    
    int dfs(int src,vector<vector<int>> &g,vector<bool> &vis)
    {
        vis[src]=true;
        int len=1;
        for(int ch:g[src])
        {
            if(vis[ch]) continue;
            len+=dfs(ch,g,vis);
            
        }
        
        return len;
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        
        int maxlen=INT_MIN;
        vector<bool>vis(n+1,false);
        for(int i=1;i<=n;i++)
        {
            if(vis[i]) continue;
            
            maxlen=max(maxlen,dfs(i,g,vis));
        }
        
       
        if(maxlen<2) return -1;
        
        return prime[maxlen-1];
        
    }
    
};
