#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,count=0;
	cin>> m>> n;
	while(m!=n)
	{
		m>>=1;
		n>>=1;
		count++;
	}
	cout<<(m<<count)<<endl;
	return 0;
}
