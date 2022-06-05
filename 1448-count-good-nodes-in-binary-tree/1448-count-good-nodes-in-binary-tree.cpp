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
public:
   void dfs(TreeNode* root,int maximum,int &ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->val>=maximum)
        {
            ans++;
            maximum=root->val;
        }
        dfs(root->left,maximum,ans);
       dfs(root->right,maximum,ans);

    }
    int goodNodes(TreeNode* root) {
        int ans=0;
        dfs(root,INT_MIN,ans);
        return ans;
    }
};