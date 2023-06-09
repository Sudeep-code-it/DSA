// https://practice.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1

class Solution {
  public:
    int maxi=INT_MIN;
    int find(Node *root)
    {
        if(root==NULL) return 0;
        
        int rs=max(0,find(root->right));
        int ls=max(0,find(root->left));
        

        maxi=max(maxi,root->data+rs+ls);
        
        
        
        return root->data+max(rs,ls);
    }
    int findMaxSum(Node* root)
    {
        find(root);
        return maxi;
    }
};
