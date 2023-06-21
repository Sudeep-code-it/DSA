// https://practice.geeksforgeeks.org/problems/quick-sort/1

class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high)
        {
            int p_index=partition(arr,low,high);
            quickSort(arr,low,p_index-1);
            quickSort(arr,p_index+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int pivot=arr[low];
       int i=low;
       int j=high;
       
       while(i<j)
       {
           while(pivot>=arr[i] && i<=high)
           i++;
           
           while(pivot<arr[j] && j>=low)
           j--;
           
           if(i<j)
           {
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
           }
       }
       int tempp=arr[low];
       arr[low]=arr[j];
       arr[j]=tempp;
       
       return j;
    }
    
};
