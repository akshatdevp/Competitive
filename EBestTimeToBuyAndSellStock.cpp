#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(vector<int>& prices) {
	int b=0,s=0;
	for(int i=1;i<prices.size();i++)
	{
		if(prices[i]<=prices[b])b=i;
		else s=max(s,prices[i]-prices[b]);
	}
	return s;
}
