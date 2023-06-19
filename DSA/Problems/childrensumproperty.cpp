// https://www.codingninjas.com/codestudio/problems/childrensumproperty_790723

int rec(BinaryTreeNode < int > * root)
{
    if(root==NULL)return 0;
    
    if(root->left==NULL && root->right==NULL) return root->data;

    int l=(root->left!=NULL)?root->left->data:0;
    int r=(root->right!=NULL)?root->right->data:0;

    if (l + r < root->data) {
    if(root->left!=NULL)root->left->data=root->data;
     if(root->right!=NULL)root->right->data=root->data;

    }
    return root->data=rec(root->left)+rec(root->right);
}


void changeTree(BinaryTreeNode < int > * root) {
    if(root==NULL) return;
    rec(root);
}  
