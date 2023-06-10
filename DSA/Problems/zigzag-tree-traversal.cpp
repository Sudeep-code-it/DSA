// https://practice.geeksforgeeks.org/problems/zigzag-tree-traversal/1

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
          vector<int> ans;
        
        if(root == NULL) return ans; 
            
        deque<Node*> q; 
        q.push_front(root); 
        bool flag = true;
        
        while(!q.empty()) {
           
            int n = q.size();
            
           if(flag){
               
               for(int i=0; i<n; i++){
                   Node* node = q.front();
                   ans.push_back(node->data);
                   q.pop_front();
                   
                   if(node->left) q.push_back(node->left);
                   if(node->right) q.push_back(node->right);
               }
           }else{
                for(int i=0; i<n; i++){
                   Node* node = q.back();
                   ans.push_back(node->data);
                   q.pop_back();
                   
                   if(node->right) q.push_front(node->right);
                   if(node->left) q.push_front(node->left);
               }
           }
            
            flag = !flag;
        }
        return ans;   
    }
};
