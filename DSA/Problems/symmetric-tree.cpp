//  https://practice.geeksforgeeks.org/problems/symmetric-tree/1

class Solution{
    public:
    bool issym(Node* r1, Node* r2)
    {
        if(r1==NULL && r2==NULL) return true;
        if(r1==NULL) return false;
        if(r2==NULL) return false;
        
        if(r1->data!=r2->data) return false;
        
	    return issym(r1->right,r2->left)&&issym(r1->left,r2->right);
        
    }
    bool isSymmetric(struct Node* root)
    {
        if(root==NULL) return true;
	   return issym(root->right,root->left);
    }
};
