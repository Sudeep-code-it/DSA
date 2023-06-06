// https://practice.geeksforgeeks.org/problems/predecessor-and-successor/1

class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        if(root==NULL) return;
        
        if(key < root->key)
        {
            if(suc==NULL)
            suc=root;
            else
            {
               if(suc->key > root->key)
               suc=root;
            }
           
            
            findPreSuc(root->left,pre,suc,key);
        }
        else if(key > root->key)
        {
            if(pre==NULL)
            pre=root;
            else
             {
               if(pre->key < root->key)
               pre=root;
            }
            
            findPreSuc(root->right,pre,suc,key);
        }
        else
        {
        
            findPreSuc(root->right,pre,suc,key);
            findPreSuc(root->left,pre,suc,key);
           
        }
       
    }
};
