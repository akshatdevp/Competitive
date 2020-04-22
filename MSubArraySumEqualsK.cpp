#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int subarraySum(vector<int>& nums, int k) {
			map<int,int> m;
			m[0]=1;
			int ans=0,cou=0;
			for(int i=0;i<nums.size();i++)
			{
				ans+=nums[i];
				if(m[ans-k])cou+=m[ans-k];
				m[ans]++;
			}
			return cou;
		}
};
int main()
{
	Solution s;
	int n;
	cin>> n;
	vector<int> v(n);
	for( int& i:v)cin>>i;
	cout<<s.subarraySum(v,1);
	return 0;
}
