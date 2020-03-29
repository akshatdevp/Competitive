#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int coinChange(vector<int>& coins, int amount) {
			vector<int> dp(amount+1,amount+1);
			dp[0]=0;
			for(int i:coins)
			{
				for(int j=i;j<amount+1;j++)
					dp[j]=min(dp[j],dp[j-i]+1);
			}
			return dp[amount]>amount?-1:dp[amount];
		}
};
