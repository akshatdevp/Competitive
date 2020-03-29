#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
			//if(beginWord==endWord)return 0;
			//       // vector<bool> vis(wordList,size(),false);
			unordered_set<string> us(wordList.begin(),wordList.end());
			queue<string> q;
			q.push(beginWord);
			int count=0;
			while(!q.empty())
			{
				count++;
				int x=q.size();
				for(int i=0;i<x;i++)
				{
					string s=q.front();
					if(s==endWord)return count;
					q.pop();
					for(int ind=0;ind<s.size();ind++)
					{
						char t=s[ind];
						for(int j=0;j<26;j++)
						{
							s[ind]=char('a'+j);
							if(us.find(s)!=us.end())
							{
								us.erase(s);
								q.push(s);
							}
						}s[ind]=t;
					}
				}
			}return 0;
		}
};
