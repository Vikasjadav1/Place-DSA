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

 int ans=0;
 int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }

    int leftheigth=height(root->left);
    int rightheigth=height(root->right);

     ans=max(ans,leftheigth+rightheigth);
     return max(leftheigth,rightheigth)+1;
 }

public:
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};