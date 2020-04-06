#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		vector<int> findDuplicates(vector<int>& nums) {
			vector<int> res;
			for(int i:nums)
			{
				i=abs(i);
				if(nums[i-1]<0)res.push_back(i);
				else nums[i-1]=-1*nums[i-1];
			}
			return res;
		}
};
