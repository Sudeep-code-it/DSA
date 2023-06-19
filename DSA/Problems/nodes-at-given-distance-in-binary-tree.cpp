// https://practice.geeksforgeeks.org/problems/nodes-at-given-distance-in-binary-tree/1

class Solution
{
private:

public:
  
    unordered_map<Node*,Node*>par;
    Node* t=NULL;
    void parr(Node* root,int target)
    {
        queue<Node*>q;
        
        q.push(root);
        while(!q.empty())
        {
            Node* cur=q.front();
            q.pop();
            
            if(cur->data==target)t=cur;
            
            if(cur->left!=NULL)par[cur->left]=cur;
            if(cur->right!=NULL)par[cur->right]=cur;
            
            
            if(cur->left!=NULL)q.push(cur->left);
            if(cur->right!=NULL)q.push(cur->right);
            
        }
    }
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
       parr(root,target);
       
       int dist=0;
       
       queue<Node*>qq;
       unordered_map<Node*,bool>vis;
       
       qq.push(t);
       vis[t]=true;
       
       while(!qq.empty())
       {
           if(dist==k)break;
           else dist++;
           
           int size=qq.size();
           for(int i=0;i<size;i++)
           {
               Node* cur=qq.front();
               qq.pop();
               
               if(cur->left!=NULL && !vis[cur->left])
               {
                   qq.push(cur->left);
                   vis[cur->left]=true;
               }
                if(cur->right!=NULL && !vis[cur->right])
               {
                   qq.push(cur->right);
                   vis[cur->right]=true;
               }
                if(par[cur] && !vis[par[cur]])
               {
                   qq.push(par[cur]);
                   vis[par[cur]]=true;
               }
           }
       }
       vector<int>ans;
       
       while(!qq.empty())
       {
           ans.push_back(qq.front()->data);
           qq.pop();
       }
       
       sort(ans.begin(),ans.end());
       return ans;
       
    }
};
