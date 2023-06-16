// https://practice.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1

class Solution {
public:
stack<int>st;
vector<int>ans;
void left(Node *root)
{
    if(root->left==NULL && root->right==NULL) return;
    ans.push_back(root->data);
    if(root->left!=NULL)left(root->left);
    if(root->left==NULL && root->right!=NULL)left(root->right);
}
void right(Node *root)
{
    if(root->left==NULL && root->right==NULL) return;
    st.push(root->data);
    if(root->right!=NULL)right(root->right);
    if(root->left!=NULL && root->right==NULL)right(root->left);
}
void dfs(Node *root)
{
     if(root->left==NULL && root->right==NULL) 
     {
         ans.push_back(root->data);
     return;}
    if(root->left!=NULL)dfs(root->left);
    if(root->right!=NULL)dfs(root->right);
}
    vector <int> boundary(Node *root)
    {
        
        ans.push_back(root->data);
        if(root->left!=NULL) left(root->left);
        if(root->right!=NULL) right(root->right);
        
        if(root->left==NULL && root->right==NULL) return ans;
        dfs(root);
        
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
        
    }
};
