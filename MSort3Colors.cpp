#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		void sortColors(vector<int>& nums) {
			int b=0,w=0,r=0;
			for(int i:nums)
			{
				(nums[b++]=2)&&i<2&&(nums[w++]=1)&&i<1&&(nums[r++]=0);
			}
		}
};
