// https://practice.geeksforgeeks.org/problems/frequency-game/1

class Solution{
public:
    int LargButMinFreq(int arr[], int n) {
     map<int,int>mp;
     if(n==1) 
     return arr[0];
     
     for(int i=0;i<n;i++)
     mp[-1*arr[i]]++;
     
     int val=-1* mp.begin()->first;
     int pre=mp.begin()->second;
  
     for(auto it=mp.begin();it!=mp.end();it++)
     {
         if(pre>(it->second)){ 
         pre=it->second;
         val=-1*it->first;
         }
      
     }
    
    return val;
    }
};
