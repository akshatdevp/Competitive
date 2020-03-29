#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int partitionDisjoint(vector<int>& A) {
			int cm=A[0],pm=A[0],ans=0;
			for(int i=1;i<A.size();i++)
			{
				cm=max(cm,A[i]);
				if(A[i]<pm)
					pm=cm,ans=i;
			}
			return ans+1;}
};
