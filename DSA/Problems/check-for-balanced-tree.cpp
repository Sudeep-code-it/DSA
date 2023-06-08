// https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

class Solution{
    public:
    bool f=true;
    int maxh(Node *root)
    {
        
         if(root==NULL) return 0;
         int hr=1+maxh(root->right);
         int hl=1+maxh(root->left);
         
         if(abs(hr-hl)>1) f=false;
         
         return max(hr,hl);
    }
    
    bool isBalanced(Node *root)
    {
         maxh(root);
         return f;
    }
};
