// https://practice.geeksforgeeks.org/problems/reversing-the-equation2205/1

class Solution
{
  public:
    string reverseEqn (string s)
        {
           string ans="";
           string cur="";
           stack<string>st;
           for(int i=0;i<s.length();i++)
           {
               if(s[i]=='+' || s[i]=='-' || s[i]=='*' ||s[i]=='/')
               {
                   if(cur.length()!=0)
                   {
                       st.push(cur);
                       string x="";
                       x+=s[i];
                       st.push(x);
                       cur="";
                   }
               }
               else cur+=s[i];
           }
           if(cur.length()!=0)
           st.push(cur);
           
           while(!st.empty())
           {
               ans+=st.top();
               st.pop();
           }
           
           return ans;
        }
};
