// https://practice.geeksforgeeks.org/problems/4ead9c3991a3822f578309e2232bc5415ac35cb9/1

class Solution {
  public:
    //Function to return maximum path product from any node in a tree.
    long long findMaxScore(Node* root)
    {
        if(root==NULL) return 1;
       return max(1LL*root->data*findMaxScore(root->right),1LL*root->data*findMaxScore(root->left));
    }
};
