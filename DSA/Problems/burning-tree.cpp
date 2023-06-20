// https://practice.geeksforgeeks.org/problems/burning-tree/1

class Solution {
  public:
  unordered_map<Node*,Node*>par;
  Node* t=NULL;
  void parr(Node* root,int target)
  {
      if(root->data==target)t=root;
      if(root->left!=NULL)
      {
          par[root->left]=root;
          parr(root->left,target);
      }
      
      if(root->right!=NULL)
      {
          par[root->right]=root;
          parr(root->right,target);
      }
      
  }
    int minTime(Node* root, int target) 
    {
        parr(root,target);
        unordered_map<Node*,bool>vis;
        
        int dist=-1;
        queue<Node*>q;
        q.push(t);
        
        while(!q.empty())
        {
            dist++;
            int size=q.size();
            for(int i=0;i<size;i++)
            {
                Node* cur=q.front();
                q.pop();
                
                if(cur->left!=NULL && !vis[cur->left])
                {
                    vis[cur->left]=true;
                    q.push(cur->left);
                }
                
                if(cur->right!=NULL && !vis[cur->right])
                {
                    vis[cur->right]=true;
                    q.push(cur->right);
                }
                
                if(par[cur] && !vis[par[cur]])
                {
                    vis[par[cur]]=true;
                    q.push(par[cur]);
                }
                
            }
        }
        
        return dist;
    }
};
