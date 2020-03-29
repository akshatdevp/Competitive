#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int smallestRangeII(vector<int>& A, int K) {
			sort(A.begin(),A.end());
			int m1=A[0], m2=A[A.size()-1],diff=m2-m1;
			for(int i=0;i<A.size()-1;i++)
			{
				m1=min(A[0]+2*K,A[i+1]);
				m2=max(m2,A[i]+2*K);
				diff=min(diff,m2-m1);
			}
			return diff;

		}
};
