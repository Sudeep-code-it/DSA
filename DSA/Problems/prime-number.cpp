// https://practice.geeksforgeeks.org/problems/prime-number2314/1

class Solution{
public:
    int isPrime(int N){
          if(N==1) return 0;
          int c=0;
          for(int i=1;i*i<=N;i++)
          {
              if(N%i==0)
              {
                  c++;
                  
                  if((N/i)!=i)
                  c++;
              }
              
              if(c>2)
              return 0;
          }
          
          if(c<=2)
          return 1;
          else
          return 0;
    }
};
