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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
        return nullptr;

        if(key<root->val){
        root->left= deleteNode(root->left,key);
        return root;
        }
       else if(key>root->val){
        root->right=deleteNode(root->right,key);
        return root;
        }
        else{
            //leaf Node
            if(!root->left&&!root->right){
            delete root;
            return nullptr;
            }
            //left child exists
            else if(!root->right){
            TreeNode* tmp=root->left;
            delete root;
            return tmp;
            }
            //right child exists
            else if(!root->left){   
            TreeNode* tmp=root->right;
            delete root;
            return tmp;
            }
            //both child exists
            else{
            TreeNode* parent=root;
            TreeNode* child=root->left;
            while(child->right){
                parent=child;
                child=child->right;
            }
            if(root!=parent){
                parent->right=child->left;
                child->left=root->left;
                child->right=root->right;
                delete root;
                return child;
            }else{                
                child->right=root->right;
                delete root;
                return child;
            }

            }

        }
    return root;
    }
};


