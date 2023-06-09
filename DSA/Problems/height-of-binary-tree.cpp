// https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

class Solution{
    public:
   
    int height(struct Node* node){
      if(node==NULL) return 0;
      return max(1+height(node->left),1+height(node->right));
    }
};
