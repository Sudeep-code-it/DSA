// https://practice.geeksforgeeks.org/problems/top-view-of-binary-tree/1

class Solution
{
    public:
   
    vector<int> topView(Node *root)
    {
  map<int,int>mp;
    vector<int>ans;
    queue<pair<int,Node*>>q;
  
   q.push({0,root});

   while(!q.empty())
   {
       auto cur=q.front();
       q.pop();
       
       if(mp.find(cur.first)==mp.end())
          mp[cur.first]=cur.second->data;
          
       if(cur.second->left!=NULL)
       q.push({cur.first-1,cur.second->left});
        if(cur.second->right!=NULL)
       q.push({cur.first+1,cur.second->right});
   }
   
   for(auto it=mp.begin();it!=mp.end();it++)
   ans.push_back(it->second);
   
     return ans;
    }

};
