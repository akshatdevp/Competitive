#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int find(vector<int> arr,int target)
		{
			int low=0;
			int high=arr.size()-1;
			int ans=arr.size();
			while(low<=high)
			{
				int mid=low+(high-low)/2;
				if(arr[mid]>=target)ans=mid,high=mid-1;//finds lowest occurance of element, or next of lowest.
				else low=mid+1;
			}
			return ans;
		}
		vector<int> searchRange(vector<int>& arr, int target) {
			int x=find(arr,target);
			int y=find(arr,target+1)-1;//find lowest occurance of target+1, or occurance of last+1
			cout<<x<<" "<<y<<endl;
			if(x<=y)return {x,y};//element is found
			return {-1,-1};// 3 4 5 target=8,  
		}
};
int main()
{
	vector<int> ip;
	int x;
	while(cin>> x)ip.push_back(x);
	ip.pop_back();
	Solution s;
	vector<int> v=(s.searchRange(ip,x));
	cout<<v[0]<<" "<<v[1];
	return 0;
}
