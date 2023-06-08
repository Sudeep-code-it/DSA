// https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

class Solution
{
    public:
    stack<Node*>st;
    void move(Node *root)
    {
        if(root==NULL) return;
       
        move(root->left);
        st.push(root);
         move(root->right);
    }
    int kthLargest(Node *root, int k)
    {
             move(root);
             if(k>st.size())
             return -1;
             k--;
             while(k--)
             {
                 st.pop();
             }
             return st.top()->data;
    }
};
