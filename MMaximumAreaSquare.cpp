#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int maximalSquare(vector<vector<char>>& matrix) {
			if(matrix.size()==0)return 0;
			int si=matrix.size(),sj=matrix[0].size();
			vector<vector<int>> v(si,vector<int>(sj,0));
			int maxa=0;
			for(int i=0;i<si;i++)
				for(int j=0;j<sj;j++)
				{
					if(i==0||j==0||v[i][j-1]==0||v[i-1][j]==0||v[i-1][j-1]==0||matrix[i][j]=='0')
						v[i][j]=matrix[i][j]-'0';
					else v[i][j]=min(v[i-1][j],min(v[i-1][j-1],v[i][j-1]))+1;
					maxa=max(v[i][j],maxa);
				}
			return maxa*maxa;
		}
};
int main()
{
	Solution sol;
	int n,m;
	cin>> n>> m;
	vector<vector<char>> mat(n,vector<char>(m,'0'));
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>> mat[i][j];
	cout<<sol.maximalSquare(mat);
	return 0;
}
