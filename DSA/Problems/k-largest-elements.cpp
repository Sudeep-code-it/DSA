// https://practice.geeksforgeeks.org/problems/k-largest-elements4206/1

class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	   multiset<int>s;
	   vector<int>ans;
	   for(int i=0;i<n;i++)
	   s.insert(-arr[i]);
	   auto it=s.begin();
	   for(int i=0;i<k;i++)
	   {
	       ans.push_back(-*it);
	       it++;
	   }
	   
	   return ans;
	}

};
