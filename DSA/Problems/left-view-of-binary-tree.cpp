// https://practice.geeksforgeeks.org/problems/left-view-of-binary-tree/1

vector<int> leftView(Node *root)
{
   unordered_map<int,int>mp;
   
   queue<pair<int,Node*>>q;
   q.push({0,root});
   vector<int>ans;
   if(root==NULL) return ans;
   
   while(!q.empty())
   {
       auto cur=q.front();
       q.pop();
       
       if(mp.find(cur.first)==mp.end())
       {
           ans.push_back(cur.second->data);
           mp[cur.first]=1;
       }
       
       if(cur.second->left!=NULL)
       q.push({cur.first+1,cur.second->left});
       if(cur.second->right!=NULL)
       q.push({cur.first+1,cur.second->right});
   }
   
   return ans;
   
}
