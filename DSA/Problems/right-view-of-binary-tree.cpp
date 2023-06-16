// https://practice.geeksforgeeks.org/problems/right-view-of-binary-tree/1

class Solution
{
    public:
    vector<int> rightView(Node *root)
    {

   map<int,vector<int>>mp;

   queue<pair<int,Node*>>q;
   q.push({0,root});
   vector<int>ans;
   if(root==NULL) return ans;

   while(!q.empty())
   {
       auto cur=q.front();
       q.pop();

 
        mp[cur.first].push_back(cur.second->data);
     

       if(cur.second->left!=NULL)
       q.push({cur.first+1,cur.second->left});
       if(cur.second->right!=NULL)
       q.push({cur.first+1,cur.second->right});
   }
   
   for(auto it=mp.begin();it!=mp.end();it++)
   ans.push_back(it->second[it->second.size()-1]);

   return ans;
    }
};
