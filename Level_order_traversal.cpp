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
class Solution { // Image is add with same file name to understand better
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }
        queue <TreeNode*> q;
        q.push(root);
        q.push(NULL); // to seperate the queue nodes , to get seperate nested values in ans vector(nested)
        vector<int> curr;
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop(); // imediately poped after we store the queue front() in t;
            if(t==NULL){
                ans.push_back(curr);
                curr.resize(0); // after putting node we resize curr vector to 0, so that next left right node come as nested form.
                if(q.size()>0){
                    q.push(NULL); // next seperation after we push left & right nodes from line 36 and 39.
                }
            }
            else{
                curr.push_back(t->val);
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
            }
        }
        return ans;

    }
};