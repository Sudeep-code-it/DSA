// https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to rearrange an array so that arr[i] becomes arr[arr[i]]
    //with O(1) extra space.
    void arrange(long long arr[], int n) {
       
       for(int i=0;i<n;i++)
         arr[i]=1LL*n*(arr[arr[i]]%n)+arr[i];
         
       
       for(int i=0;i<n;i++)
       arr[i]/=n;
        
    }
};
