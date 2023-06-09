// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1

class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		   set<string>s;
		   vector<string>ans;
		   sort(S.begin(),S.end());
		   s.insert(S);
		   while(next_permutation(S.begin(),S.end()))
		   {
		       s.insert(S);
		   }
		   
		   for(auto it=s.begin();it!=s.end();it++)
		   ans.push_back(*it);
		   
		   return ans;
		}
};
