// https://practice.geeksforgeeks.org/problems/pattern/1

class Solution {
  public:
    void printDiamond(int n) {
       
       for(int i=0;i<n;i++)
       {
           for(int j=i;j<n-1;j++)
           cout<<" ";
           
           for(int j=0;j<=i;j++)
           cout<<"* ";
           cout<<endl;
           
       }
       
      for(int i=0;i<n;i++)
      {
           for(int j=0;j<i;j++)
           cout<<" ";
           
           for(int j=0;j<n-i;j++)
           cout<<"* ";
           cout<<endl;
      }
    }
};
