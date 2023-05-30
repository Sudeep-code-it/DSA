// https://practice.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        int m,x;
        bool f=false;
        for(int i=0;i<n;i+=k)
        {
            m=i,x=i+k-1;
           
            if(x>=n) 
           { f=true;
            break;}
            
                while(m<x)
            {
                swap(arr[m],arr[x]);
                m++;
                x--;
                
            }
        }
        
        if(f)
        {
            x=n-1;
                 while(m<x)
            {
                swap(arr[m],arr[x]);
                m++;
                x--;
                
            }
            
        }
        
    }
};
