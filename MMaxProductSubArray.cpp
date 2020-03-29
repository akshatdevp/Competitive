#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int maxProduct(vector<int>& nums) {
			if(!nums.size())return 0;
			int result=nums[0],mi=nums[0],ma=nums[0];
			for(int i=1;i<nums.size();i++)
			{
				if(nums[i]<0)
					swap(mi,ma);
				ma=max(nums[i],ma*nums[i]);
				mi=min(nums[i],mi*nums[i]);
				result=max(ma,result);
			}
			return result;
		}
};
