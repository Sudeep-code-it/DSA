// https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1

class Solution
{
    public:
    int bstfind(Node *root,int k)
    {
        if(root==NULL)
        return INT_MAX;
        
        if(k==root->data) 
        return 0;
        
        if(k>root->data) 
        return min(abs(k-root->data),bstfind(root->right,k));
        
        if(k<root->data)
        return min(abs(k-root->data),bstfind(root->left,k));
        
        
    }
    int minDiff(Node *root, int k)
    {
      int ans=INT_MAX;
      ans=min(ans,bstfind(root,k));
      return ans;
    }
};
