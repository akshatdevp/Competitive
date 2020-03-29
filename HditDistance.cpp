#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int minDistance(string word1, string word2) {
			if(word1.empty()||word2.empty())return max(word1.size(),word2.size());
			int x=word1.size();
			int y=word2.size();
			int dp[x+1][y+1];
			for(int i=0;i<x+1;i++)
				for(int j=0;j<y+1;j++)
				{
					if(i==0||j==0)dp[i][j]=i+j;
					else dp[i][j]=(word1[i-1]==word2[j-1]?dp[i-1][j-1]:min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1);
				}
			return dp[x][y];
		}
};
/*
   h o r s e
   0 1 2 3 4 5
   r 1 1 2 2 3 4
   o 2 2 1 2  
   s 3

   replace coming from diagonal
   insert coming from above
   delete coming from left
   */
