// https://practice.geeksforgeeks.org/problems/maximum-width-of-tree/1

class Solution {
  public:
    int getMaxWidth(Node* root) {

queue<pair<int,Node*>>q;
int c=0;
int ans=0;
int pre=1;
q.push({1,root});

while(!q.empty())
{
    auto cur=q.front();
    q.pop();
    
    if(cur.second->left!=NULL) q.push({cur.first+1,cur.second->left});
     if(cur.second->right!=NULL) q.push({cur.first+1,cur.second->right});
     
    if(pre==cur.first)
    c++;
    else
    {
        pre=cur.first;
        ans=max(ans,c);
        c=1;
    }
    
}
ans=max(ans,c);

return ans;
     
    }
};
