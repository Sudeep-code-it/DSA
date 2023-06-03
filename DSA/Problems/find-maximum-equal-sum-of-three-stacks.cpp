// https://practice.geeksforgeeks.org/problems/find-maximum-equal-sum-of-three-stacks/1

class Solution{
public:
    int maxEqualSum(int n1,int n2,int n3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        
        int i=0,j=0,k=0;
        int s1=0,s2=0,s3=0;
        for(i=0;i<n1;i++)
        s1+=S1[i];
        
        for(i=0;i<n2;i++)
        s2+=S2[i];
        
        for(i=0;i<n3;i++)
        s3+=S3[i];
        
        i=0;
        
        while(i<n1 && j<n2 && k<n3)
        {
            if(s1==s2 && s2==s3)
            return s1;
            
            else if(s1>=s2 && s1>=s3) s1-=S1[i++];
            else if(s2>=s1 && s2>=s3) s2-=S2[j++];
            else if(s3>=s1 && s3>=s2) s3-=S3[k++];
        }
        
        return 0;
    }
};
