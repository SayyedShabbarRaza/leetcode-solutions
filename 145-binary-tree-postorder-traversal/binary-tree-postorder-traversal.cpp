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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==nullptr)
            return ans;

         stack<TreeNode*>s;
        s.push(root);

        while(!s.empty()){
        TreeNode* tmp=s.top();
        ans.push_back(tmp->val);
        s.pop();

        if(tmp->left)
        s.push(tmp->left);

        if(tmp->right)
        s.push(tmp->right);
}
        reverse(ans.begin(),ans.end());
        return ans;
    }    
};