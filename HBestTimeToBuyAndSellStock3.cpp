#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
	//total buy and sell 1st and 2nd to be tracked at every point
	int tb1=INT_MIN,ts1=0,tb2=INT_MIN,ts2=0;
	for(int i=0;i<prices.size();i++)
	{
		tb1=max(-prices[i],tb1);//loss after first buy
		ts1=max(prices[i]+tb1,ts1);//profit after first sell
		tb2=max(ts1-prices[i],tb2);//total  after second buy
		ts2=max(prices[i]+tb2,ts2);//profit after second sell
	}
	return ts2;
}
};int main()
{

	return maxProfit({1,2,3,4,3,2,1,4,5,4,2,1});
	return 0;
}
