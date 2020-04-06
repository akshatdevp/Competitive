/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
	public boolean help(TreeNode l,TreeNode r)
	{
		return (l==null&&r==null)||!(l==null||r==null)&&(l.val==r.val&&help(l.left,r.right)&&help(l.right,r.left));
	}
	public boolean isSymmetric(TreeNode root) {
		if(root==null)return true;
		return help(root.left,root.right);
	}
}
