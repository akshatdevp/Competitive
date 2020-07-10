
#include<bits/stdc++.h>
using namespace std;
    int longestValidParentheses(string s) {
        int left=0,right=0,ans=0;
        for(char c:s)// (() if number of right<left then it doesn't include those here.
        {
            if(c=='(')left++;
            if(c==')')right++;
            if(left==right)ans=max(ans,left*2);
            if(right>left)right=left=0;
        }
        reverse(s.begin(),s.end());
        left=0,right=0;
         for(char c:s)// ()) if number of left<right the it doesn't include those here.
        {
            if(c=='(')left++;
            if(c==')')right++;
            if(left==right)ans=max(ans,left*2);
            if(right<left)right=left=0;
        }
        return ans;
    }
int main()
{
	string s;
	cin>> s;
	cout<<longestValidParentheses(s);
	return 0;
}
// (())(()))
