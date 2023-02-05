class Solution {
    TreeNode* rec(vector<int>& nums,int left,int right){
        if(left>right){
            return NULL;
        }
        int mid=left+(right-left)/2;
        TreeNode* root =new TreeNode(nums[mid]);
        root->left=rec(nums,left,mid-1);
        root->right=rec(nums,mid+1,right);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return rec(nums,0,nums.size()-1);
    }
};