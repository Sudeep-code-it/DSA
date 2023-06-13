// https://practice.geeksforgeeks.org/problems/chinky-and-diamonds3340/1

class Solution {
  public:
    long long maxDiamonds(int A[], int n, int k) {
      multiset<int>s;
      long long ans=0;
      for(int i=0;i<n;i++)
      {
          s.insert(-A[i]);
      }
      
      while(k--)
      {
          auto it=s.begin();
          int val=-(*it);
          ans+=val;
          s.erase(it);
          s.insert(-(val/2));
         
      }
      
      return ans;
    }
};
