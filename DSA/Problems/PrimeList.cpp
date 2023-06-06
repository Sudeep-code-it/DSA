// https://practice.geeksforgeeks.org/problems/6cb0782855c0f11445b8d70e220f888e6ea8e22a/1

class Solution{
public:

    Node *primeList(Node *head){
        
        
        int isprime[100002]={0};
        vector<int>prime;

    
    for(int i=2;i*i<100002;i++)
    {
        if(isprime[i]==0)
        {
            prime.push_back(i);
            for(int j=i*i;j<100002;j+=i)
            isprime[j]=1;
            
        }
    }
    
    for(int i=sqrt(100002);i<100002;i++)
    {
        if(isprime[i]==0)
        prime.push_back(i);
    }


        
        Node *cur=head;
        while(cur!=NULL)
        {
            auto low=lower_bound(prime.begin(),prime.end(),cur->val);
           
          if(*low!=cur->val)
          {
              if(low==prime.begin()) cur->val=*low;
              else
              {    
                  auto high=low;
                  low--;
        
                  if(abs(cur->val-*high)<abs(cur->val-*low)) cur->val=*high;
                  else cur->val=*low;
                   
                   
              }
          }
          cur=cur->next; 
        }
        
        return head;
    }
};
