// https://practice.geeksforgeeks.org/problems/prefix-match-with-other-strings/1

class Solution{   
public:
    int klengthpref(string arr[], int n, int k, string str){    
        int c=0;
        if(k>str.size())return 0;
        string s1=str.substr(0,k);
        for(int i=0;i<n;i++)
        {
            if(s1==arr[i].substr(0,k)) c++;
        }
        
        return c;
    }
};
