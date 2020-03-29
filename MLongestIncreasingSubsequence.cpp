#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int binSa(vector<int> nv,int x)//binary searching for the element, and if it isn't present, return the position where it would be inserted
		{
			int l=0;
			int r=nv.size()-1;
			int ans=-1;
			while(l<=r)
			{
				int mid=l+(r-l)/2;
				if(nv[mid]==x)return mid;//element found
				else if(nv[mid]>x)r=mid-1;//search left half
				else {ans=mid;l=mid+1;}//searching the right half for a better answer, since we want longest subsequnce
			}
			return -ans-1;
			//reason: ans+1 is the position element would be inserted(if not found),- to signify it hasn't been found.
		}
		int lengthOfLIS(vector<int>& nums) {
			if(!nums.size())return 0;//edge case
			vector<int> newvec;//dp array
			newvec.push_back(nums[0]);//initializing
			for(int i=1;i<nums.size();i++)
			{
				int pos=-binSa(newvec,nums[i]);//finding position where element is to be inserted
				if(pos==newvec.size())newvec.push_back(nums[i]);//if > last element then need to increase size of array
				else if(pos>=0)newvec[pos]=nums[i];//update element at position
				//else element is already present and we don't do anything.
			}
			return newvec.size();
		}
};

