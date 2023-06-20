// https://practice.geeksforgeeks.org/problems/reverse-coding2452/1

class Solution {
  public:
    int sumOfNaturals(int n) {
       int m=1e9+7;
       
       return (int)(1LL*n*(n+1)%m/2)%m;
    }
};
