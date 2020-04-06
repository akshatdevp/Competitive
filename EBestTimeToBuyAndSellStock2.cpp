#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& s) {
	int p=0;
	for(int i=1;i<s.size();i++)if(s[i]>s[i-1])p+=s[i]-s[i-1];
	return p;
}
int main()
{

	cout<<maxProfit({1,5,7,2,6,3,5,1,3});
	return 0;
}
