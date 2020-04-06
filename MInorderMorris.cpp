/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void help(TreeNode* root,vector<int>& v)
    {
        if(!root)
            return;
        TreeNode* current=root;
        while(current)
        {
            if(!current->left)
                v.push_back(current->val),current=current->right;
            else
            {
                TreeNode* t=current->left;
                while(t->right)
                    t=t->right;
                t->right=current;
                TreeNode*temp=current;
                current=current->left;
                temp->left=NULL;
            }
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        help(root,v);
        return v;
    }
};