// https://practice.geeksforgeeks.org/problems/arranging-the-array1131/1

class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            vector<int>pos;
            int j=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]<0)
                arr[j++]=arr[i];
                
                else
                pos.push_back(arr[i]);
            }
            
            for(int i=0;i<pos.size();i++)
            arr[j++]=pos[i];
        }
};
