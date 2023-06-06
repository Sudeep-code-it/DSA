// https://practice.geeksforgeeks.org/problems/replace-every-element-with-the-least-greater-element-on-its-right/1

class Solution{
    public:
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<int>ans(n);
        set<int>s;
        for(int i=n-1;i>=0;i--)
        {
            s.insert(arr[i]);
            
            auto it=s.upper_bound(arr[i]);
            
            if(it==s.end()) ans[i]=-1;
            else ans[i]=*it;
        }
        
        return ans;
    }
    
};
