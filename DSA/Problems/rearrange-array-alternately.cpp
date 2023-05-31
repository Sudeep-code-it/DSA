// https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1

class Solution{
    public:
 
    void rearrange(long long *arr, int n) 
    { 
      vector<long long>v;
      int i=0,j=n-1;
     while(i<=j)
      {
  v.push_back(arr[j]);
  v.push_back(arr[i]);
  i++;
  j--;
      }
      
      for(int i=0;i<n;i++)
      arr[i]=v[i];
    	 
    }
};
