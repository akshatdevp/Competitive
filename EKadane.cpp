#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int maxSubArray(vector<int>& nums) {
			if(!nums.size())return 0;
			int tempmax=nums[0],allmax=nums[0];
			for(int a=1;a<nums.size();a++)
				tempmax=max(tempmax+nums[a],nums[a]),allmax=max(tempmax,allmax);
			return allmax;
		}
};
