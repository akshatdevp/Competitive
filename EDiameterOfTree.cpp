#include<bits/stdc++.h>
using namespace std;
class Solution {
	public:
		int up=0;
		int ans(TreeNode* root)
		{
			if(!root)return 0;
			int l=ans(root->left),r=ans(root->right);
			up=max(up,l+r);
			return max(l,r)+1;
		}
		int diameterOfBinaryTree(TreeNode* root) {
			ans(root);
			return up;
		}
};
