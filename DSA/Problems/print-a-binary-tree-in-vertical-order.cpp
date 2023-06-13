// https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

class Solution
{
    public:
   
    vector<int> verticalOrder(Node *root)
    {
         map<int,vector<int>>mp;
        vector<int>ans;
       
       queue<pair<Node*,int>>q;
       q.push({root,0});
       
       while(!q.empty())
       {
           auto it=q.front();
           mp[it.second].push_back(it.first->data);
           q.pop();
           
           if(it.first->left)
         q.push({it.first->left,it.second-1});
           
           if(it.first->right)
           q.push({it.first->right,it.second+1});
       }
       
       for(auto e:mp)
       {
           for(auto ele:e.second)
           ans.push_back(ele);
       }
        return ans;
    }
};
