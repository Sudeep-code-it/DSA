// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

class Solution{
  public:
    int minJumps(int arr[], int n){
     int maxR = arr[0];
        int step = arr[0];
        int jump = 1;
        if(n==1) return -1;
        else if(arr[0]==0) return -1;
        else{
            for(int i=1;i<n;i++){
                if(i==n-1){
                    return jump;
                }
                
                maxR = max(maxR, i+arr[i]);
                step--;
                if(step == 0){
                    jump++;
                    if(i >= maxR){
                        return -1;
                    }
                    step = maxR-i;
                }
            }
        }
    }
};