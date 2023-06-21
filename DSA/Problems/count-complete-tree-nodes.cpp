// https://leetcode.com/problems/count-complete-tree-nodes

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int hl(TreeNode* root)
    {
 if(root==NULL) return 0;
 return 1+hl(root->left);
    }
     int hr(TreeNode* root)
    {
 if(root==NULL) return 0;
 return 1+hr(root->right);
    }
    int countNodes(TreeNode* root) {
        if(root==NULL) return 0;

        int lh=hl(root);
        int rh=hr(root);

        if(lh==rh) return pow(2,lh)-1;

        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
