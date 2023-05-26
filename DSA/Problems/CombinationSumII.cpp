// https://leetcode.com/problems/combination-sum-ii

class Solution {
public:

void allposs(vector<int>& c, int t, vector<int>&curvec, int curind,vector<vector<int>>&ans)
{
    if(t==0)
    {
      if(curvec.size()!=0)
      {
          sort(curvec.begin(),curvec.end());
          ans.push_back(curvec);
      }

      return ;

    }

    if(t<0) return ;

    if(curind==c.size()) return ;

        
        curvec.push_back(c[curind]);
        allposs(c,t-c[curind],curvec,curind+1,ans);
        curvec.pop_back();
        while(curind!=c.size()-1 && c[curind]==c[curind+1])
        curind++;
        allposs(c,t,curvec,curind+1,ans);
    

}
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        
        sort(c.begin(),c.end());
        vector<vector<int>>ans;
        vector<int>curvec;

        allposs(c,t,curvec,0,ans);
        
        return ans;
    }
};
