#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int longestConsecutive(vector<int>& nums) {
			if(nums.size()==0)
				return 0;
			unordered_set<int> us;
			for(int i=0;i<nums.size();i++)us.insert(nums[i]);
			int streak=1, mx=1;
			for(int i:us)
			{
				if(us.find(i-1)!=us.end())continue;
				while(us.find(i+1)!=us.end())
					i++,streak++;
				mx=max(mx,streak);
				streak=1;
			}

			return mx;

		}
};
