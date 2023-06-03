// https://practice.geeksforgeeks.org/problems/implement-atoi/1

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int i=0;
        bool f=false;
        
        if(str[0]=='-')
        {
            f=true;
        i++;
            
        }
        
        for(;i<str.size();i++)
        {
            if(!(str[i]<='9' && str[i]>='0'))
            return -1;
        }
        int ans=0;
        int j=0;
        
        if(f) j=1;
        else j=0;
        
        while(j<str.length())
        {
            ans=ans*10+(str[j]-'0');
            j++;
        }
       if(f) return ans*-1;
       else return ans;
    }
};
