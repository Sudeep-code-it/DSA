//  https://practice.geeksforgeeks.org/problems/relative-sorting4323/1

class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int n, vector<int> A2, int m) 
    {
        map<int,int>mp;
        
        for(int i=0;i<n;i++)
        mp[A1[i]]++;
        
        vector<int>ans;
        
        for(int i=0;i<m;i++)
        {
            if(mp.find(A2[i])!=mp.end())
            {
                while(mp[A2[i]]!=0)
               { ans.push_back(A2[i]);
                   mp[A2[i]]--;
               }
                
                mp.erase(A2[i]);
            }
        }
        
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            while(it->second!=0)
            { ans.push_back(it->first);
                   it->second--;
            }
        }
        
        return ans;
        
    } 
};
