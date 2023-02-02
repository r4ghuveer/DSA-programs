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
    bool isBalanced(TreeNode* root) {
        if(!root){return true;}
        int left=0;
        int right=0;
        left=check(root->left);
        right=check(root->right);

        return abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right); // last two &&'s are to check it is a valid binary tree
    }
private://check method to calculate whether the height of left subtree and right subtree is less than one or not
    int check(TreeNode* root){
        if(!root) return 0;
        int maxLeft = check(root->left);
        int maxRight = check(root->right);
        return max(maxLeft, maxRight)+1;
        }
};