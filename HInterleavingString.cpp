// given three strings, we find if some interleaving(put characters of one string in between the others) of the two strings results in 3rd string
// abc def abdcef is true

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector< vector<int> > dp; 
    bool hlp(string s1,string s2,string s3,int i1,int i2, int i3)
    {
       bool ans=false; 
        if(i1==s1.size())return s2.substr(i2)==s3.substr(i3);
        if(i2==s2.size())return s1.substr(i1)==s3.substr(i3);
        if(dp[i1][i2]!=-1)return dp[i1][i2];
         if(s1[i1]==s3[i3])
            ans|=hlp(s1,s2,s3,i1+1,i2,i3+1);
        
         if(s2[i2]==s3[i3])
            ans|=hlp(s1,s2,s3,i1,i2+1,i3+1);
        
        dp[i1][i2]=ans; 
        
        return ans;
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.size()+s2.size()!=s3.size())return false;
        dp=vector<vector<int> >(s1.size(),vector<int>(s2.size(),-1));
        return hlp(s1,s2,s3,0,0,0);      
    }
};
int main()
{
	string s1,s2,s3;
	cin>> s1>> s2>> s3;
	cout<<( new Solution() )->isInterleave(s1,s2,s3);
	return 0;

}
//
//Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
//aadbbcbcac
//0 0 0
//1 0 1
//2 0 2
//2 1 3
//3 1 4
//3 2 5
//4 2 6
