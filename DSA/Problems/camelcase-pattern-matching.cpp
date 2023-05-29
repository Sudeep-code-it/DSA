// https://practice.geeksforgeeks.org/problems/camelcase-pattern-matching2259/1

class Solution {
  public:
    vector<string> CamelCase(int n, vector<string> Dict, string Pat) {
      vector<string>ans(1,"-1");
      bool f=true;
      for(int i=0;i<n;i++)
      {
          string s=Dict[i];
          string x="";
          for(int j=0;j<s.size();j++)
          {
              if(s[j]<='Z' && s[j]>='A')
              x+=s[j];
              
              if(x==Pat)
              {
                 if(f)
                 {
                     ans.pop_back();
                     f=false;
                 }
                 ans.push_back(s);
                 break;
              }
          }
      }
      
      return ans;
    }
};
