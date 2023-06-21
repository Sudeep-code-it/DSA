// https://practice.geeksforgeeks.org/problems/lemonade-change/1

class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &bill) {
       int five=0,ten=0;
       for(int i=0;i<n;i++)
       {
          if(bill[i]!=5)
          {
              if(bill[i]==10)
                {if(five==0)return false;
                  five--;}
                  
               else if(bill[i]==20)
               {
                   if(ten>0 && five>0)
                   {
                       five--;
                       ten--;
                   }
                   else if(five>=3)
                   five-=3;
                   else
                   return false;
                   
               }
              
          }
          if(bill[i]==5)five++;
          if(bill[i]==10)ten++;
        
       }
       
       return true;
    }
};
