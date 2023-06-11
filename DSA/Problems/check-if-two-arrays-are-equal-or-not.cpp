// https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        
        
    unordered_map<long long,long long>m;
     for(int i=0;i<N;i++)
     m[A[i]]++;
     
     for(int i=0;i<N;i++)
     {
         if(m.find(B[i])==m.end()) return false;
         m[B[i]]--;
         if(m[B[i]]<0) return false;
     }
     
     return true;
        
    }
};
