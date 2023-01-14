#include <bits/stdc++.h>
using namespace std;
int maxDepth(TreeNode* root) {
    if(!root) return 0;
    int maxLeft = maxDepth(root->left);
    int maxRight = maxDepth(root->right);
    return max(maxLeft, maxRight)+1;
    }
int main(){
    maxDepth(root)
    //look explanation in height_of_tree.jpeg
}