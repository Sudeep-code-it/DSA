// https://practice.geeksforgeeks.org/problems/print-leaf-nodes-from-preorder-traversal-of-bst2657/1

class Solution {
  public:
    vector<int> leafNodes(int arr[],int n) {
        vector<int>ans;
        stack<int>st;
        for(int i=0,j=1;i<n-1;i++,j++)
        {
            if(arr[i]>arr[j])
            st.push(arr[i]);
            else
            {
                bool f=false;
                while(!st.empty())
                {
                    if(arr[j]>st.top())
                    {
                        st.pop();
                        f=true;
                    }
                    else break;
                }
                if(f)
                ans.push_back(arr[i]);
            }
            
        }
        ans.push_back(arr[n-1]);
        
        return ans;
        
    }
};
