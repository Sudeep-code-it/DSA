// https://practice.geeksforgeeks.org/problems/least-prime-factor5216/1

class Solution {
  public:
    vector<int> leastPrimeFactor(int n) {
        
        vector<int>ans(n+1);
        
        for(int i=0;i<=n;i++)
        ans[i]=i;
        
        for(int i=2;i*i<=n;i++)
        {
            if(ans[i]==i)
            {
                for(int j=i*i;j<=n;j+=i)
                {
                    if(ans[j]==j)
                    ans[j]=i;
                }
            }
        }
        
        
        return ans;
    }
};
