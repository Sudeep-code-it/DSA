//  https://practice.geeksforgeeks.org/problems/queue-operations/1

class Solution{

    public:
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
       q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        
        q.push(-1);
        int c=0;
        while(q.front()!=-1)
        {
            if(q.front()==k)
            c++;
            
            q.push(q.front());
            q.pop();
        }
        q.pop();
        
        return c;
    }
    
};
