// https://practice.geeksforgeeks.org/problems/diameter-of-binary-tree/1

class Solution {
  public:
    int maxxi=0;
    int maxh(Node* root)
    {
        if(root==NULL) return 0;
        
        int rh=maxh(root->right);
        int lh=maxh(root->left);
        
        maxxi=max(maxxi,1+lh+rh);
        
        return 1+max(rh,lh);
        
    }
    int diameter(Node* root) {
        maxh(root);
        
        return maxxi;
    }
};
