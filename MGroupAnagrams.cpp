#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		vector<vector<string>> groupAnagrams(vector<string>& strs) {//solution 1 add to map based on sort string. U_M does not work with vector<char>
			unordered_map<string, vector<string> > umv;//map<vec<char>,vec<str>> 
			for(string s:strs)
			{
				string s1=s;//vector<int> temp;
				sort(s1.begin(),s1.end());//add [c-'a'] for each char to temp
				umv[s1].push_back(s);//mv[temp].push_back(s)
			}
			vector<vector<string>> ans;
			for(auto i:umv)
				ans.push_back(i.second);
			return ans;      
		}
};
int main()
{

	return 0;
}
