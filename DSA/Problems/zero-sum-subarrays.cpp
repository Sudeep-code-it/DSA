// https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
       unordered_map<long long int,long long int>mp;
       mp[0]++;
       long long int sum=0,ans=0;
       for(int i=0;i<n;i++)
       {
           sum=sum+arr[i];
           
           if(mp.find(sum)!=mp.end())
           ans+=mp[sum];
           
           mp[sum]++;
       }
       
       return ans;
    }
};
