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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root)
        return ans;
        stack<TreeNode*>s;
        stack<bool>visited;
        s.push(root);
        visited.push(0);

        while(!s.empty()){
            TreeNode* tmp=s.top();
            s.pop();
            bool flag=visited.top();
            visited.pop();

            if(!flag){
                if(tmp->right){
                s.push(tmp->right);
                visited.push(0);
                }

                s.push(tmp);
                visited.push(1);
                if(tmp->left){
                s.push(tmp->left);
                visited.push(0);
                }
            }
            else{
                ans.push_back(tmp->val);
            }

        }
        return ans;
    }
};