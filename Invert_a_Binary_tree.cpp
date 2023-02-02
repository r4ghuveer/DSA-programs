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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL){
            return NULL;
        }
        TreeNode* head=root;
        rev(head);
        return root;
    }
private:
    void rev(TreeNode* root){
        if(root){
            rev(root->left);
            rev(root->right);
            // swap(root->left, root->right);
            TreeNode* temp;
            temp=root->left;
            root->left=root->right;
            root->right=temp;
        }

    }
};