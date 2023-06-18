//  https://practice.geeksforgeeks.org/problems/ticket-counter-2731/1

class Solution {
  public:
    int distributeTicket(int n, int k) {
        deque<int>q;
        
        for(int i=1;i<=n;i++)
        q.push_back(i);
        
        while(q.size()!=1)
        {
            int z=k;
            while(z && q.size()!=1)
            {
                q.pop_front();
                z--;
            }
            z=k;
            while(z && q.size()!=1)
            {
                q.pop_back();
                z--;
            }
            
        }
        
        return q.front();
    }
};
