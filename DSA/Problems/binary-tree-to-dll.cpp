// https://practice.geeksforgeeks.org/problems/binary-tree-to-dll/1

class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node * bToDLL(Node *root)
    {
        Node * cur=root;
        stack<Node*>st;
        
        Node *val=new Node();
        val->data=-1;
        val->left=NULL;
        val->right=NULL;
        
        Node *head=val;
        while(true)
        {
            while(cur!=NULL)
            {
               st.push(cur);
               cur=cur->left;
            }
            cur=st.top();
            st.pop();
            // cout<<cur->data<<" ";
            
            if(val->data==-1)
            val->data=cur->data;
            else
            {
                Node *newn=new Node;
                newn->data=cur->data;
                val->right=newn;
                newn->left=val;
                newn->right=NULL;
                val=newn;
            }
            
            cur=cur->right;
            if(st.empty() && cur==NULL) break;
            
        }
        return head;
    }
};
