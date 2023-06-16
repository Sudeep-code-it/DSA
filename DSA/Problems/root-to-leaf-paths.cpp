// https://practice.geeksforgeeks.org/problems/root-to-leaf-paths/1

void find(Node *root,vector<int>&temp,vector<vector<int>>&ans)
 {
      temp.push_back(root->data);
      
     if(root->left==NULL && root->right==NULL)
     {
         ans.push_back(temp);
     }
     
    
     if(root->left!=NULL)
     find(root->left,temp,ans);
     
     if(root->right!=NULL)
     find(root->right,temp,ans);
     
     temp.pop_back();

 }
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>>ans;
   vector<int>temp;
   find(root,temp,ans);
   
   return ans;
}
