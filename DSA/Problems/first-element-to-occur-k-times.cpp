// https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        vector<int>vec(201,0);
        
        for(int i=0;i<n;i++)
        {
            vec[a[i]]++;
            if(vec[a[i]]==k)
            return a[i];
        }
        
        return -1;
    }
};
