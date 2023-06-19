// https://practice.geeksforgeeks.org/problems/children-sum-parent/1

class Solution{
    public:
    //Function to check whether all nodes of a tree have the value 
    //equal to the sum of their child nodes.
    int isSumProperty(Node *root)
    {
     if(root==NULL) return 1;
     if(root->left==NULL && root->right==NULL) return 1;
     int l=0,r=0;
     if(root->left!=NULL)l=root->left->data;
     if(root->right!=NULL)r=root->right->data;
     int val=l+r;
     if(root->data==val)
     return isSumProperty(root->left)&&isSumProperty(root->right);
     else
     return 0;
 
    }
};
