// https://practice.geeksforgeeks.org/problems/95bb244da24edd6214086ff934886ccda6ed9da8/0

unordered_map<int,int> mm1,mm2;
  long long int dp[100001][2];
    long long help(int pos,int index,vector<int> &temp,int indication){
        if(index==temp.size())return 0;
        if(dp[index][indication]!=-1)return dp[index][indication];
        long long one=0,two=0;
        int left=mm1[temp[index]];
        int right=mm2[temp[index]];
        one = abs(pos-left)+abs(left-right)+help(right,index+1,temp,1);
        if(index==temp.size()-1)one+=abs(right-0);
        two = abs(pos-right)+abs(left-right)+help(left,index+1,temp,0);
        if(index==temp.size()-1)two+=abs(left-0);
        return dp[index][indication]= min(one,two);
    }
    
    long long minTime(int n, vector<int> &loc, vector<int> &typ) {
      set<int>s;
       memset(dp,-1,sizeof(dp));
      for(int i=0;i<n;i++)
      {
         
          s.insert(typ[i]);
          
          if(mm1.find(typ[i])==mm1.end())
          {
              mm1[typ[i]]=loc[i];
              mm2[typ[i]]=loc[i];
              
          }
          mm1[typ[i]]=min(mm1[typ[i]],loc[i]);
          mm2[typ[i]]=max(mm2[typ[i]],loc[i]);
      }
      
      vector<int>temp;
      for(auto it=s.begin();it!=s.end();it++)
          temp.push_back(*it);
        
        
         memset(dp,-1,sizeof(dp));
        
        return help(0,0,temp,0);
    }
};
