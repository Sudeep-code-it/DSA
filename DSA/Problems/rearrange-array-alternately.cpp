// https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately-1587115620/1
/*  using extra space
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
*/

// no extra space
class Solution{
    public:
 
    void rearrange(long long *arr, int n) 
    { 
       int max_ind=n-1;
       int min_ind=0;
       int max=arr[n-1]+1;

      for(int i=0;i<n;i++)
      {
          if(i%2==0)
          {arr[i]=(arr[max_ind]%max)*max+arr[i];
              max_ind--;
          }
          else
          {arr[i]=(arr[min_ind]%max)*max+arr[i];
              min_ind++;
          }
      }
      
      for(int i=0;i<n;i++)
      arr[i]/=max;
    	 
    }
};
