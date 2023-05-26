// https://leetcode.com/problems/combination-sum/


class Solution {
public:

     void allposs(vector<int>&c,int t,set<vector<int>>&ans,vector<int>cv)
     {
         if(t==0)
         {
             if(cv.size()!=0)
             {
              sort(cv.begin(),cv.end());
              ans.insert(cv);
             }
              return ;
         }
         if(t<0) return ;

         for(int i=0;i<c.size();i++)
         {
            
              cv.push_back(c[i]);
              allposs(c,t-c[i],ans,cv);
              cv.pop_back();
             

         }
     }
    
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        set<vector<int>>ans;
         vector<int>v;
        allposs(c,t,ans,v);

        vector<vector<int>>ret;

        for(auto it=ans.begin();it!=ans.end();it++)
        ret.push_back(*it);

        return ret;
    }
};
