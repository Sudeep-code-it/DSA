// https://practice.geeksforgeeks.org/problems/find-kth-permutation-0932/1

class Solution
{
public:
    string kthPermutation(int n, int k)
    {
        vector<int>vec;
        for(int i=1;i<=n;i++)
        vec.push_back(i);
        k--;
        while(k--)
        {
            next_permutation(vec.begin(),vec.end());
        }
        
        string ans="";
        for(int i=0;i<n;i++)
        ans+=to_string(vec[i]);
        
        return ans;
    }
};
