/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    bool dfs(TreeNode* n,long long mn,long long mx){
        if(!n) return true;
        if(n->val<=mn||n->val>=mx) return false;
        return dfs(n->left,mn,n->val)&&dfs(n->right,n->val,mx);
    }
public:
    bool isValidBST(TreeNode* root){
        return dfs(root,LLONG_MIN,LLONG_MAX);
    }
};