// https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/1

class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        set<int>s;
        
        while(head1!=NULL){
        s.insert(head1->data);
        head1=head1->next;
        }
        
        while(head2!=NULL){
        s.insert(head2->data);
        head2=head2->next;
        }
        
        Node* root=NULL;
        Node* pre=NULL;
        
        for(auto it=s.begin();it!=s.end();it++)
        {
            Node* newn=new Node(*it);
            newn->next=NULL;
            
            if(root==NULL)
            root=newn;
            
            if(pre!=NULL)
            pre->next=newn;
            
            pre=newn;
        }
        
        return root;
        
        
    }
};
