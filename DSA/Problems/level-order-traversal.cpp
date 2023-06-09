// https://practice.geeksforgeeks.org/problems/level-order-traversal/1

class Solution
{
    public:
     vector<int>ans;
     queue<Node*>q;
     void bfs()
     {
          
         while(!q.empty())
         {
             Node *cur=q.front();
             q.pop();
             ans.push_back(cur->data);
             if(cur->left!=NULL) q.push(cur->left);
             if(cur->right!=NULL) q.push(cur->right);
             
         }
     }
    vector<int> levelOrder(Node* node)
    {
        q.push(node);
      bfs();
      return ans;
    }
};
