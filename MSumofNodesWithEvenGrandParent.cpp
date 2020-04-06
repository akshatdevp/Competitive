#include<bits/stdc++.h>
using namespace std;
/**
 *  * Definition for a binary tree node.
 *   * struct TreeNode {
 *    *     int val;
 *     *     TreeNode *left;
 *      *     TreeNode *right;
 *       *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *        * };
 *         */
class Solution {
	public:
		int sumEvenGrandparent(TreeNode* root) {
			if(!root)return 0;
			stack<pair<TreeNode*,bool>> sb;
			if(root->left)sb.push(make_pair(root->left,root->val&1));
			if(root->right)sb.push(make_pair(root->right,root->val&1));
			int ans=0;
			while(!sb.empty())
			{
				pair<TreeNode*,bool> temp=sb.top();
				sb.pop();
				//cout<<temp.first->val<<" "<<temp.second<<endl;
				bool pa=temp.first->val&1;
				if(temp.first->right){if(!temp.second)ans+=temp.first->right->val;sb.push(make_pair(temp.first->right,pa));}
				if(temp.first->left){if(!temp.second)ans+=temp.first->left->val;sb.push(make_pair(temp.first->left,pa));}
			}
			return ans;
		}
};
