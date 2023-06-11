// https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1

class Solution
{
    public:
    vector <int> calculateSpan(int price[], int n)
    {
       stack<int>st;
       vector<int>ans(n);
       for(int i=0;i<n;i++)
       {

           while(!st.empty() && price[st.top()]<=price[i])
           st.pop();

           if(st.empty())
           ans[i]=i-0+1;
           else
           ans[i]=i-st.top();
           
           st.push(i);
           
       }
       return ans;
    }
};
