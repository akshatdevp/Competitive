#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int lastStoneWeight(vector<int>& stones) {
			priority_queue<int> pq;
			for(int i:stones)
				pq.push(i);
			while(!pq.empty())
			{
				int x=pq.top();
				pq.pop();
				int y=pq.top();
				pq.pop();
				//		cout<<x<<" "<<y<<endl;
				if(abs(x-y))
					pq.push(abs(x-y));
				if(pq.size()==1)return pq.top();
			}
			return 0;

		}
};
int main()
{
	Solution s;
	vector<int> v={2,7,4,1,8,1};
	cout<<s.lastStoneWeight(v);
	return 0;
}
